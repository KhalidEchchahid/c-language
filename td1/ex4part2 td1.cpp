#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c,max;
	printf("donner a , b et c:");
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(b>a && b>c){
		max=b;
	}else if(c>b && c>a){
		max=c;
	}
	printf("le max =%d",max);
	return 0;
}
