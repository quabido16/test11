#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAX_LEN 1000 
void nhap(int matrix[], int n) {
	int i;
    for (i = 0; i < n; i++) {        
        	printf("Nhap phan tu [%d]: ", i);
            	scanf("%d", &matrix[i]);                    
                }             	
}
void in(int matrix [], int n){
	int i;
	
	for (i = 0; i < n; i++) {
        
        	printf("a[%d]=%d ",i, matrix[i]);
                    
                    printf(" \n"); 
                }	
}
float tinhtb(int matrix[],int n) {
    int i, sum = 0, count = 0;
    
    for (i = 0; i < n; i++) {
       
                sum += matrix[i];      
    }
    return (float)sum/n;
    }
void max(int matrix[],int n){
	int i, max1 =0,vitri=0;
	for(i=0;i<n;i++){
		if(matrix[i]> max1){
			max1=matrix[i];
			vitri=i; 
		} 		
	}  printf("Phan tu lon nhat trong mang la %d, tai vi tri %d",max1,vitri); 
} 
void nhapchuoi(char c[]){
	fflush(stdin);
	printf("Nhap chuoi can kiem tra: ");
	gets(c); 
} 
void inchuoi(char c[]){
	printf("Chuoi vua nhap la:"); 
	printf("%s\n",c); 
} 
void daonguocchuoi(char c[],char c1[]){
	strcpy(c1,c);
	strrev(c1);
	printf("Chuoi dao nguoc la: %s\n",c1); 
} 
int CheckChuoidoixung(char c[])
{
	int Dodaichuoi=strlen(c);
     for(int i=0;i<Dodaichuoi/2;i++)
	 {
		 if(c[i]!=c[Dodaichuoi-i-1]) return 0;
	 }
	 return 1;
}

void tep() {
    FILE *fp, *fp_out;
    int number, max = 0;
    char filename_in[MAX_LEN], filename_out[MAX_LEN];

    printf("Nhap tep can doc: ");
    scanf("%s", filename_in);

    fp = fopen(filename_in, "r");
    if (fp == NULL) {
        printf("Khong the mo %s.\n", filename_in);
        exit(1);
    }

    while (fscanf(fp, "%d", &number) == 1) {
        if (number > max) {
            max = number;
        }
    }

    fclose(fp);

    printf("So lon nhat trong tep %s la %d.\n", filename_in, max);

    printf("Nhap tep de viet so lon nhat vao: ");
    scanf("%s", filename_out);

    fp_out = fopen(filename_out, "w");
    if (fp_out == NULL) {
        printf("Khong the mo %s.\n", filename_out);
        exit(1);
    }

    fprintf(fp_out, "%d", max);

    fclose(fp_out);

    printf("So lon nhat da duoc luu vao tep %s.\n", filename_out);
}


int main() {
    int matrix[10];
    char c[100],c1[100]; 
    int m, n, i, j, chon,a; 

    do {
        printf("\nMENU\n");
        printf("1. Nhap mang \n");
        printf("2. Nhap chuoi\n");
        printf("3. Moi ban nhap tep\n");        
        printf("4. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &chon);
 
        switch (chon) {
            case 1:
            	printf("Nhap so phan tu mang: ");
    			scanf("%d", &n);
    			nhap(matrix,n); 
    			printf("Mang vua nhap la:\n") ; in(matrix,n);
                printf("Trung binh cac so trong ma tran la: %.2f\n", tinhtb(matrix, n));
                max(matrix,n);
				break;
            case 2:
            nhapchuoi(c); 
            inchuoi(c);
			daonguocchuoi(c,c1);
			int k= CheckChuoidoixung(c);
			if(k==0){
			printf("==>Chuoi tren khong doi xung");
			}else{
			printf("==>Chuoi tren doi xung");} 
			break;         
		    return 0; 
            default:
            printf("Lua chon khong hop le\n");
            break;
            case 3:
            	tep();
                break;           			 
    }
} while (chon != 4);

return 0;}
