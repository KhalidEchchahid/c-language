#include <stdio.h>
#include <stdlib.h>

 
int main(){
	int U[50], V[50];
	int i,n;
	long PS=0;
	printf("donner la dimention de U et V :");
	scanf("%d",&n);
	
	for(i=0 ; i<n ; i++){
		printf("donner l element %d :",i);
		scanf("%d",&U[i]);
	}
	for(i=0 ; i<n ; i++){
		printf("donner l element %d :",i);
		scanf("%d",&V[i]);
	}
	for(i=0 ; i<n ; i++){
	    PS+=U[i]*V[i];
	}
	printf("ce produit est egale :%ld",PS);
	
		
}
