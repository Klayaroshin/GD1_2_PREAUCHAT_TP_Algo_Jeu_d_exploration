#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char ChoixDestination[20];


int main(){
	
	printf ("Quelle est la destination ou vous voulez aller ? \n");
	printf ("Tapez le nom de votre destination pour aller soit a Heilheim ou a Tristram \n");

	scanf ("%s" ,ChoixDestination);
		
		if (strcmp(ChoixDestination,"Heilheim")== 0) {
			 printf ( "vous etes arrive a Heilheim" );
		}
		 
		if (strcmp(ChoixDestination,"Tristram")== 0) {
			 printf ( "vous etes arrive a Tristram" );
		}
	return 0;
}