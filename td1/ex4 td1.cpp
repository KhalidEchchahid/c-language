#include <stdio.h>
#include <stdlib.h>
 int main(){
 	int a,b,min;
 	printf("donner a et b :");
 	scanf("%d%d",&a,&b);
 	min=a;
 	if(a>b){
 		min=b;
	 }
	 printf("le min=%d",min);
 }
