#include <stdio.h>
#include <stdlib.h>
int main(){
	int n , x;
	x=0;
	do{
		printf("donner un entier :\n");
		scanf("%d",&n);
		x+=n;
	}while (n != -1);
	printf("la somme est : %d",x);
}
