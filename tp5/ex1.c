#include <stdio.h>

int main(){
	int n,i,min,max;
	int T[50];
	printf("donner la dimention de ce tableux :");
	scanf("%d",&n);
	for(i=0 ; i<n ; i++){
		printf("donner l element %d :",i);
		scanf("%d",&T[i]);
	}
	min=0;
	max=0;
	for(i=0 ; i<n ; i++){
		if(T[i]<T[min]){
			min=i;
		}
		if(T[i]>T[max]){
			max=i;
		}
	}
	printf("le max = %d  sa position est %d \n",T[max],max);
	printf("le min = %d sa position est %d",T[min],min);
}
