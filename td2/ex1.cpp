#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main(){
	char c;
	printf("voulez vous jouer ?");
	scanf("%c",&c);
	if((c=getchar() == 'o' ) || (c=getchar()) == 'O'){
		printf("c est parti !");
	}else if((c=getchar() == 'n' ) || (c=getchar() == 'N')){
	
		printf("tant pis");
	}else{
		printf("erreur");
	}
	getch();
}

