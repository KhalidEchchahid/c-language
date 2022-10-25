#include <stdio.h>

int main(){
	 int N,val,i,tmp;
	 int T[100];
	
	printf("donner la dimension de tableau : ");
	scanf("%d",&N);
	printf("remplire ce tablaeu par order criossant :\n");
	for (i=0;i<N;i++){
		printf("l element %d : ",i);
		scanf("%d",&T[i]);
	}
	printf("enter une valeur :");
	scanf("%d",&val);
	T[N]=val;
	for(i=N-1;i<=0;i--){
		f(T[N]<T[i]){
			tmp=T[N];
			T[N]=T[i];
		    T[i]=tmp;
		}
	}
	for (i=0;i<=N;i++){
		printf("T[%d]=%d \n",i,T[i]);
	}
	
	return 0;
}

