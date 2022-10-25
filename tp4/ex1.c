#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int T[50];
	int n,i,j,tmp;
	do{
		printf("donner la dimention de ce tableux :");
		scanf("%d",&n);
		
	}while (n>50);
	
	printf("le tableaux est : \n");
	
	for(i=0 ; i<n ; i++){
		printf("donner l element %d :",i);
		scanf("%d",&T[i]);
	}
	for(i=0 ; i<n ; i++){
		printf("T[%d]=%d \n",i,T[i]);
	}
	
	for(i=0 , j=n-1 ; i<j ; i++,j--){
		tmp=T[i];
		T[i]=T[j];
		T[j]=tmp;
	}
	printf("apres l inverse");
	printf("\n");
	for(i=0 ; i<n ; i++){
		printf("T[%d]=%d \n",i,T[i]);
	}
	
}
