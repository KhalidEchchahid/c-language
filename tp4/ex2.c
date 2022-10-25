#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int T[50] , TPOS[50] ,TNEG[50];
	int n,i,j,k;
	k=0;j=0;
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
	for(i=0 ; i<n ; i++){
	    if(T[i]>0){
	  	    TPOS[j]=T[i];
	  	    j++;
	    }
	    if(T[i]<0){
	  	    TNEG[k]=T[i];
	  	    k++;
	    }
	}
	printf("le tableau positif:\n");
	for(i=0 ; i<j ; i++){
		printf("TPOS[%d]=%d \n",i,TPOS[i]);
	}
	
	printf("le tableau negatif:\n");
	
	for(i=0 ; i<k ; i++){
		printf("TNEG[%d]=%d \n",i,TNEG[i]);
	}
}
	
	
	
	
	
	
	
