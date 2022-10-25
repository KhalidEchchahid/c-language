#include <stdio.h>
 int main(){
 	int A[50],B[50];
 	int N,M,i,z;
 	
 	printf("donner la dimention de tab A : ");
 	scanf("%d",&N);
 	printf("donner la dimention de tab B : ");
 	scanf("%d",&M);
 	
 	for(i=A;i<A+N;i++){
 		printf("l element %d : ",i);
 		scanf("%d",A+i);
	 }
 	
 	for(i=B;i<B+M;i++){
 		printf("l element %d : ",i);
 		scanf("%d",B+i);
	 }

 }


