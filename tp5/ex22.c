#include <stdio.h>
main()
{
 int A[50];
 int VAL;
 int N; 
 int I; 

 printf("Dimension N du tableau initial (max.50) : "); 

 scanf("%d", &N );
 for (I=0; I<N; I++)
 {
 printf("El�ment %d : ", I);
 scanf("%d", &A[I]);
 }
 printf("El�ment � ins�rer : ");
 scanf("%d", &VAL );
 
 printf("Tableau donn� : \n");
 for (I=0; I<N; I++)
 printf("%d ", A[I]);
 printf("\n");
 
 for (I=N ; (I>0)&&(A[I-1]>VAL) ; I--){ 
    A[I]=A[I-1];
	
 }
   A[I]=VAL;
   
    N++;
 printf("Tableau r�sultat :\n");
 for (I=0; I<N; I++)
 printf("%d ", A[I]);
 printf("\n");
 return 0;
} 
