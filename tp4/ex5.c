#include <stdio.h>

int main(){
	
	int T[50][50];
	int L,C,i,j;
	long s;
	do{
		printf("donner les dimentions L et C :");
		scanf("%d%d",&L,&C);
	}while (L>50 || C>50);
	
	for(i=0 ; i<L ; i++){
		for(j=0 ; j<C ; j++){
			printf("donner l element %d%d :",i,j);
		    scanf("%d",&T[i][j]);
		}
	}
	printf("ce tableau est :\n");
	
	for(i=0 ; i<L ; i++){
		for(j=0 ; j<C ; j++)
		    printf("T[%d][%d]=%d \n",i,j,T[i][j]);
		    
	}
	for(i=0 ; i<L ; i++){
		for(s=0,j=0 ; j<C ; j++){
			s=s+T[i][j];
		}  
		printf("la somme de la ligne N %d est : %ld\n",i,s);
	}
	for(j=0 ; j<C ; j++){
		for(s=0,i=0 ; i<C ; i++){
			s=s+T[i][j];
		}  
		printf("la somme de la ligne N %d est : %ld\n",j,s);
	}
}


