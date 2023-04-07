#include<stdio.h> 
#include<math.h> 
int main() {
	printf("Tinh chu vi va dien tich tam giac\n"); 
	float a,b,c,C,p,s; 
	//khai bao kieu du lieu 3 canh:a,b,c; chu vi C; nua chu vi p;dien tich s  
	printf("Nhap canh a: ");
	scanf("%f",&a);
	printf("Nhap canh b: ");
	scanf("%f", &b);
	printf("Nhap canh c: "); 
	scanf("%f", &c);
	//nhap vao 3 canh va in ra man hinh 
	
    //dieu kien tao thanh tam giac
		if(a+b>c && a+c>b && b+c>a) {
			C= a+b+c; 
			p=(	a+b+c)/2.0;
			s=sqrt(p*(p-a)*(p-b)*(p-c)); 
		printf("Chu vi cua tam giac la: %.2f\n", C);
		printf("Dien tich tam giac la: %.2f", s); 
	}else{
		printf("khong thoa man ");
	} 
	return 0;	 
} 	
