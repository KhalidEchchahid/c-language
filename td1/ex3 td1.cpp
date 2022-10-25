#include <stdio.h>
#include <stdlib.h>


int main(){
	const float pi=3.14 ;
	const   int  r=20 ;
	float  D , P , S ;
    D=r*2;
	P=D*pi;
	S=r*r*pi;
	printf("un cercle de rayon %d a pour diametre %f ,pour circonference %f et pour surface %f",r,D,P,S);
	return 0;	
	
}
