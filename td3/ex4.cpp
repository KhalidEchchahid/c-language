#include <stdio.h>
#include <stdlib.h>

int main(){
	int T[50];
	int N , i;
	long s;
	s=0;
	printf("donner la dimension de ce tableau :\n");
	scanf("%d",N);
	for( i=0 ; i<N ;i++){
		printf("entrer la valeur de T[%d] :\n",i);
		scanf("%d",&T[i]);
	} 
	for( i=0 ; i<N ;i++){
		printf(" T[%d]=%d \n",i,T[i]);
	} 
	for( i=0 ; i<N ;i++){
		s+=T[i];
	} 
	printf("s=%ld\n",s);
	return 0;
	
}
