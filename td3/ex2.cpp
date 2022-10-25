#include <stdio.h>
#include <stdlib.h>
 int main(){
 	double x , a , result;
 	int n ;
 	printf("donner la valeur de x : \n");
 	scanf("%lf",&x);
 	printf("donner le degre de polunome :\n");
 	scanf("%d",&n);
 	for(int i=0 ; i<=n; i++){
 		printf("donner le coefficient :\n");
 		scanf("%lf",&a);
 		if(i==n)
 		    result=a;
 		else{
 			result*=x;
 			result+=a;
		 }
	 }
	 
	printf("la valeur de ce polinome est  %.2lf :\n",result);
 	
 	return 0;
 	
 	
 }

