#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double x , puiss;
	int n;
	printf("donnar x :");
	scanf("%lf",&x);
	printf("donnar n :");
	scanf("%d",&n);
	puiss=1;
	for(int i=1 ; i<=n ; i++){
		puiss*=x;
	}
	printf("la resultat est : %.2lf ",puiss);
	
	
}
