#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
int main() {
	char s1[50]="Truong ",s2[50]= "Dai Hoc ",s3[50]="FPT ", s[50],kt[3]="Hoc ";
	char *x;
	x=(char*)malloc(50);
	strcpy(s,s2);
	puts(s);
	printf("chuoi s1 va chuoi s2 %s ",strcpy(s2,s3));//ham strcmp tra ve nguyen
	s[0]='\0';
	strcpy(s2,s2); 
	printf("\nChoi s=%s\n",s);
	x=strcat(s,s1);
	puts(x); 
	strcat(s,s2);
	strcat(s,s3);
	puts(x); printf("\n");
	//puts(strupr(s));printf("\n");
	//puts(strlwr(s));
	//s[0]=toupper(s[0]);
	//printf("\n");puts(s);
	
} 
