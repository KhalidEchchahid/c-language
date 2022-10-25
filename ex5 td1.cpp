#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float a,b,c,delta,x,x1,x2;
	printf("donner a , b et c");
	scanf("%f%f%f",&a,&b,&c);
	delta=pow(b,2)-(4*a*c);
	printf("delta=%f\n",delta);
	if(delta<0){
		printf(" pas du solution dans R ");
	}else if (delta==0){
		x=-b/(2*a);
		printf("la seule solution est x=%f",x);
	}else{
		x1=(-b-sqrt(delta))/(2*a);
		x2=(-b+sqrt(delta))/(2*a);
		printf("les deux solutions sont x1=%f , x2=%f\",x1,x2);
	}
	return 0;
}
