#include <stdio.h>
#define MAXN 6 
#define MAXE 10

typedef struct{
	float note ;
	int coef ;
} Note;

typedef struct etudiant {
	char numero [10];
	char nom[80];
	char prenom[80];
	float moy;
	Note N[MAXN];
}Etudiant;

/**************************************************/

Etudiant saisirE(){
	Etudiant f ;
	int i;
	printf("entrer le num : \t");
	gets(f.numero);
	printf("entrer le nom : \t");
	gets(f.nom);
	printf("entrer le prenom : \t");
	gets(f.prenom);
	for(i=0 ; i<MAXN ; i++){
	    f.N[i].note=0;
	    f.N[i].coef=0;
	}
	f.moy=0;
	return f ;
}

/**************************************************/
void afficherE(Etudiant f){
	int i ;
	printf(" le num %s \n le nom %s \n le prenom %s \n ",f.numero,f.nom ,f.prenom);
	for(i=0 ;i<MAXN ;i++){
		printf("la note %d : %f et de cof %f \n",i+1, f.N[i].note ,f.N[i].coef );
	}
	printf("le moy est : %f \n " , f.moy);
}

/**************************************************/

int main(){
	Etudiant  E[MAXE] , f ;
	f=saisirE();
	afficherE(f);
}

/**************************************************/














//
//void saisirE(Etudiant *E ){
//    printf("entrer le num : \t");
//	scanf("%s",E->numero);
//	printf("entrer le nom : \t");
//	scanf("%s",E->nom);
//	printf("entrer le prenom : \t");
//	scanf("%s",E->prenom);
//	for(i=0 ; i<MAXN ; i++){
//	E->N[i].coef = 0 ;
//	E->N[i].note = 0 ;
//    }
//    E->moy = 0;
//}
//}
