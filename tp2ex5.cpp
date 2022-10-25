#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//not work and idk why !!!!
int main(){
	int n , i  , fact;
	float x ,s;
	
	printf("donner la valeur de n:");
	scanf("%d",&n);
	printf("donner la valeur de x :");
	scanf("%f",&x);
	x=0;
	for(i=0 ; i<=n ; i++){
		printf("i=%d\n",i);
		fact=fact*(2*i+1)*2*i;
		s=s+(pow((-1),i)*pow(x,(2*i+1)))/fact;
		printf("s=%f\n",s);
	}
	    
	printf("s=%.2f",s);
	
	return 0;
}
