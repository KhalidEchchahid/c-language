#include <stdio.h>
#include <stdlib.h>

int main(){
	int n , i , fact;
	printf("donner n :");
	scanf("%d",&n);
	i=1;
	fact=1;
	while (i<=n){
		fact=fact*i;
		i++;
	}
	printf("le fact de %d est %d:",n,fact);
}
