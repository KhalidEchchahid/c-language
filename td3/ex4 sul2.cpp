#include <stdio.h>
main()
{
 /* D�clarations */
 int T[50]; /* tableau donn� */
 int N; /* dimension */
 int I; /* indice courant */
 long SOM; /* somme des �l�ments - type long � cause */
 /* de la grandeur pr�visible du r�sultat. */
 /* Saisie des donn�es */
 printf("Dimension du tableau (max.50) : ");
 scanf("%d", &N );
 for (I=0; I<N; I++)
 {
 printf("El�ment %d : ", I);
 scanf("%d", &T[I]); 

 }
 /* Affichage du tableau */
 printf("Tableau donn� :\n");
 for (I=0; I<N; I++)
 printf("%d ", T[I]);
 printf("\n");
 /* Calcul de la somme */
 for (SOM=0, I=0; I<N; I++)
 SOM += T[I];
 /* Edition du r�sultat */
 printf("Somme de �l�ments : %ld\n", SOM);
 return 0;
}
