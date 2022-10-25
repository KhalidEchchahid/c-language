#include <stdio.h>
#include <stdlib.h>
main (){
	int a, b, r ;
	printf("donner a et b :\n");
	scanf("%d %d", &a, &b);
	while (	(r=( a % b ))!=0){
		a=b;
		b=r;
	
	}
	printf(" le pgcd de a et b est : %d",b);

}
//#include <stdio.h>
//#include <conio.h>
//main() { 
// int a, b, r;
// printf("Entrez a = ");
// scanf("%d",&a);
// printf("Entrez b = ");
// scanf("%d",&b);
// while ((r = (a % b)) != 0)
// {
// a = b;
// b = r;
// }
// printf("Le pgcd est %d\n",b); 
//} 
