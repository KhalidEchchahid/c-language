#include <stdio.h>
#include <stdlib.h>
 int main(){
 	char c;
 	int nba , nbe ,nbi ,nbo,nbu;
 	
 	while((c=getchar()) !=EOF){
 		switch(c){
		 
 		case 'a': nba+=1;
 		          break;
 		case 'e': nbe+=1;
 		          break;
 		case 'i': nbi+=1;
 		          break;
 		case 'o': nbo+=1;
 		          break;
 		case 'u': nbu+=1;
 		          break;
 	     }
	 }
	 
	printf("le nombre de a est :  %d\n",nba);
	printf("le nombre de e est :  %d\n",nbo);
	printf("le nombre de i est :  %d\n",nbi);
	printf("le nombre de o est :  %d\n",nbo);
	printf("le nombre de u est :  %d\n",nbu);
	
 	
 	
 }
