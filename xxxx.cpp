#include <stdio.h>

int main(){
	int n  , f , x;
	printf("donner n:");
	scanf("%d",&n);
	f=1;
	for( int i=1 ; i<=n ; i++){
		f=f*i;
		x=i;
		if(f==n){
			printf("le nombre est %d! ",x);
			break;
		}
	
	}
	
	
	
	return 0;
}
