#include <stdio.h>
main()
{
 int i, n;
 double a, x, res; 
 printf("Entrez le degre du polynome : ");
 scanf("%d",&n);
 printf("Entrez la valeur de x : ");
 scanf("%lf",&x);
 for (i = n; i >= 0; i--)
 {
 printf("Entrez le coefficient d'indice %d : ",i);
 scanf("%lf",&a);
 if (i == n)
 res = a;
 else
 {
 res *= x;
 res += a;
 }
 }
 printf("\n La valeur en %f du polynome est %f \n",x,res);
}
