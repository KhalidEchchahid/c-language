#include <stdio.h>
int main(){
    char c;
    int nb_a = 0, nb_e = 0, nb_i = 0, nb_o = 0, nb_u = 0;

    while ((c = getchar()) != EOF){
        switch (c){
            case 'a':
                nb_a++;
                break;
            case 'e':
                nb_e++;
                break;
            case 'i':
                nb_i++;
                break;
            case 'o':
                nb_o++;
                break;
            case 'u':
                nb_u++;
                break;
        }
    }
		
		printf("Nombre de a = %d\n",nb_a);
		printf("Nombre de e = %d\n",nb_e);
		printf("Nombre de i = %d\n",nb_i);
	    printf("Nombre de o = %d\n",nb_o);
		printf("Nombre de u = %d\n",nb_u);
} 
