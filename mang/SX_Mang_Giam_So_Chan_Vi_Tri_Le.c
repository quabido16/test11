#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],i,j,tam;
    int s[100]={0}; 
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); 
    } 
    
    for(i=0;i<n;i++){
        if(i%2 !=0 && a[i] %2==0){
            s[i] = a[i]; 
        }
    } 
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(s[i]<s[j]){
                tam=s[i];
                s[i]=s[j];
                s[j]=tam; 
            } 
        } 
    } 
    printf("\nOUTPUT:\n"); 
    for (i = 0; i < n; i++) {
    if (s[i] != 0) {
        printf("%d\n", s[i]);
    }}
    return 0;
} 

