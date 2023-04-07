#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sochanmax(int a[],int n){
		int  max,i=0;
		while(a[i]%2!=0)
		i++; 1 
		max=a[i];
		for(i=0;i<n;i++){
			if(a[i]%2==0)
			if(max<a[i]) max=a[i]; 
		} 
		return max; 
	} 
int main() {
	int a[5],i;
	for(i=0;i<5;i++){
		scanf("%d", &a[i]); 
	} 
	printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE:
    printf("%d", sochanmax(a, 5));
}	

