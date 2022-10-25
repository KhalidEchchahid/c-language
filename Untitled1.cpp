#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
/**Remplissage du tableau**/
 void saisie(int t[],int n)
 {
 int i;
 for(i=0;i<n;i++){
 printf("les element de T[%d]\n",i);
 scanf("%d",&t[i]);}
 }
/**Affichage du tableau**/
void affichage(int t[],int n)
 {
int i;
printf(" les elements de tableau sont:\n");
for(i=0;i<n;i++)
printf("%d ",t[i]);
 } 

/**Somme des éléments du tableau **/
 int somme(int t[],int n)
{
int i, s=0;
for(i=0;i<n;i++)
{
s=s+t[i];
}
 return(s);
 }
/**Moyenne des éléments du tableau **/
 float moyenne(int t[],int n)
 {
int s=somme(t,n);
float moy=(float)s/n;
 return(moy);
 }
/**Maximum des éléments du tableau **/
 int maximum(int t[],int n)
 {
int i;
int max=t[0];
for(i=0;i<n;i++)
 {
if(t[i]>max)
max=t[i];
}
 return(max);
 }
/**Minimum des éléments du tableau **/
 int minimum(int t[],int n)
 {
int i;
int min=t[0];
for(i=0;i<n;i++)
 {
 if(t[i]<min)
 min=t[i];
}
 return(min);
} 

/**Nombre de répétitions d'un élément dans le tableau **/
 int repetition(int t[],int n,int nbr)
 {
int i,compt=0;
for(i=0;i<n;i++)
 {
if(t[i]==nbr)
compt++;
}
 if(compt==0)
 {
 printf("l'element n'existe pas");
}
 return(compt);
}
/** Inversion du tableau **/
 void inversion(int t[],int n)
{
int i;
for(i=n-1;i>=0;i--)
 {
 printf("%d ",t[i]);
 }
}
/**l'ajout un element dans le tableau**/
 void ajout(int t[],int n,int x)
 {
int i,a;
 printf("donnez la position de la case:\n");
 scanf("%d",&a);
 for(i=n+1;i>a;i--)
 {
 t[i]=t[i-1];
 }
 t[a]=x;
 printf("le tableau apres l'ajout d'un element:\n");
 for(i=0;i<n+1;i++)
{
printf("%d ",t[i]);
 }
 }
/**Parité d'un element dans le tableau**/ 

void parite(int t[],int n)
 { int i;
 for(i=0;i<n;i++)
 {
 if(t[i]%2==0)
 {
 printf("%d ",t[i]);
 }
 }
 }
 main()
{ int i,t[50];
 int a,c,x, n;
 printf("taille du tableau <50 \n");
 scanf("%d",&n);
 do{
printf("\t\t\t\tFaites votre choix\n\n");
printf("\t\t\t1- Saisie du tableau\n");
printf("\t\t\t2- Affichage du tableau\n");
printf("\t\t\t3- Afficher le maximum du tableau\n");
printf("\t\t\t4- Afficher le minimim du tableau\n");
printf("\t\t\t5- Calculer la somme du tableau\n");
 printf("\t\t\t6- Calculer la moyenne du tableau\n");
 printf("\t\t\t7- Le Nombre de repetition d'un element\n");
 printf("\t\t\t8- Inverser le tableau\n");
printf("\t\t\t9- Ajouter un element\n");
printf("\t\t\t10- Les nombres paire du tableau \n");
printf("\t\t\t11- Quitter\n");;
scanf("%d",&c);
switch(c)
 { case 1:saisie(t,n);break;
case 2:affichage(t,n);break;
case 3:printf(" le max du tabeaux est %d\n\n", maximum(t,n));break;
case 4:printf(" le min du tabeaux est %d", minimum(t,n));break;
 case 5: printf(" la somme du tabeaux est %d", somme(t,n));break;
 case 6: printf(" la moyenne du tabeaux est %f", moyenne(t,n));break;
case 7:printf("entrer l'element a rechercher:\n");
 scanf("%d",&a);
printf("le nombre de repetition de %d est %d",a,repetition(t,n,a));
printf("\n\n");break;
case 8:printf(" le tabeaux inverse est:\n");
 inversion(t,n);break;
case 9:printf("entrer l'element a ajoute:\n");
scanf("%d",&x);
ajout(t,n,x);break;
case 10:printf("les nombres paire sont:\n");
 parite(t,n);break;
 }
 }while(c!=11);
} 
