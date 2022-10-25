#include <stdio.h>
 int main(){
 	int T[50] ,m,n,i,j,tmp;
 	    do {
 	 	printf("donner  n:");
 	 	scanf("%d",&m);
	   }while(m<=0);
	   n=0;
	   while(m!=0){
	   	T[n]=m%2;
	   	m=m/2;
	   	n++;
	   }
	   printf("%d \n",n);
	   for( i=0 , j=n-1; i<n ,j>=0 ;i++,j--){
	   	if(i<j){
	   		tmp=T[i];
	   		T[i]=T[j];
	   		T[j]=tmp;
		   }
		   else break;
	   }
	   for( i=0; i<n ;i++){
	printf("%d",T[i]);
	   }
 }
