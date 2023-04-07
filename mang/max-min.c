#include <stdio.h>
int main () {
	int a[100];
	int n,i,j;
    int max=a[0]; 
	
	do {
		printf("nhap so mang 0<n<=100: ");
		scanf ("%d", &n);
		}while (n<1 && n>100);
	for(i=0;i<n;i++){
		printf("a[%d]=",i); 
		scanf("%d",&a[i]);
	} 
	printf("mang vua nhap la:"); 
	for(i=0;i<n;i++){
		printf("%d ",a[i]); 
	} 
	printf("\n"); 
	for(i=0;i<n-1;i++){
		for(j=0;j<n;j++){
			if(a[i]<a[j]) max= a[j]; 
		} 
	} 
	
	
	printf("So lon nhat trong mang la:a[%d]=%d",i,max) ;
	
				return 0;
			}

