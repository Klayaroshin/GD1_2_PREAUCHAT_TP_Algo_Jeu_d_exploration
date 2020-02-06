#include <stdio.h>
#include <stdlib.h>


int ChoixDestination;


int main(){
	
	printf ("Quelle est la destination ou vous voulez aller ? \n");
	printf ("Tapez (1) pour aller a Heilheim ou (2) pour aller a Tristram \n");

	scanf ("%d" ,&ChoixDestination);

	 if (ChoixDestination==1){
		 printf ( "vous etes arrive a Heilheim" );
	 }

	 if (ChoixDestination==2){
		 printf ( "vous etes arrive a Tristram" );
		 


	 }

	 return 0;
}