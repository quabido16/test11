#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

/*int hamsnt(int n){
 int i;
 for(i=2;i<=sqrt(n);i++){
 	if( n % i ==0) {
		return 0; }else return n;
	} 		
} */
bool hamsnt(int n)	// ham kiem tra so nguyen to
{
	if( n < 2)
		return false;
	int i;
	for(i = 2; i <= sqrt(n);i++)
	{
		if(n % i == 0)
			return false;
	}
	return true;
}  
	while(count>0){
		if(hamsnt(n+i)){
			printf("%d\n",n+i); 
			count--; 
		} 
		i++;    
	} 
	return 0;
} 	
	 /  *
