#include<stdio.h>
#include<stdlib.h>
int Menu(){
 int chon;
 printf("\n1.Nhap Ma tran: ");
 printf("\n2.Hien ma tran: ");
 printf("\n3.Tim Max tren ma tran: ");
 printf("\n4.Sap xep tang tren cot: ");
 printf("\n nhap so khac de thoat ");
 printf("\nMoi chon: ");
 scanf("%d",&chon);
 return chon;
}
void Nhap(int a[][5], int *m, int *n){//m ,n can luu lai gia tri sau khi kt function nen phai la tham bien
 int i,j,x; // dung cach khai bao m,n la con tro.
 printf("\nNhap vao so hang va so cot: ");
 scanf("%d%d",m,n); // la con tro nen 0 can &
 for(i=0; i<*m; i++)
 for(j=0; j<*n; j++){
 printf("Nhap a[%d][%d]=",i+1,j+1);
 scanf("%d",&a[i][j]); // luu vao o nho co dia chi a tang them i*socot +j
 }
}
void sxcot(){
	
}
void Hien(int a[][5], int m, int n){
 int i,j;
 for(i=0; i<m; i++){ // duyet cac hang
 for(j=0; j<n; j++) // duyet cac cot
 printf("%d\t",a[i][j]); //* la lay gia tri trong o nho cua con tro
 printf("\n"); //xuong dong de in hang moi trong ma tran
 }
}
int TimMax(int a[][5], int m,int n){   // neu thay *a = a[][5] // 5 la gia tri toi da luc khai bao
 int i,j,max=a[0][0]; // max = a[0][0]
 for(i=0; i<m; i++)
 for(j=0; j<n; j++)
 if(max<a[i][j]) //max <thi thay *(a+i*n+j) = a[i][j]
 max=a[i][j];
 return max;
}
int main(){
 int chon , m=0,n=0,a[5][5];  //m dong, n cot la 2 bien cua ma tran
 do{
 chon=Menu();
 switch(chon){
 case 1:
 Nhap(a,&m,&n);
 break;
 case 2:
 Hien(a,m,n);
 break;
 case 3:
 printf("\n Max trong ma tran = %d",TimMax(a,m,n));
 break;
 }
 }while(chon>0 && chon <5);
}
