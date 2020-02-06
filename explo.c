#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char ChoixDestination[20];

struct Lieu {
	char nom[15];
	char description[100];
	int difficulte;
	int id[2];
};

typedef struct Lieu lieu;


int deplacement(lieu lieu1, lieu lieu2, lieu lieu3) {
	printf ("Quelle est la destination ou vous voulez aller ? \n");
	printf ("Tapez le nom de votre destination pour aller soit a Heilheim, a Tristram ou bien a l'Olympe ?\n");

	scanf ("%s" ,ChoixDestination);
		
		if (strcmp(ChoixDestination,"Heilheim")== 0) {
			printf("%s",lieu1.description);
			printf ( "vous etes arrive a Heilheim" );
			printf("Voulez vous maintenant vous diriger vers les cieux (1) ou Asgard(2) ?");
			scanf("%d",lieu1.id);
			// if (lieu1.id = {
		}
		 
		if (strcmp(ChoixDestination,"Tristram")== 0) {
			printf("%s",lieu2.description);			
			printf ( "vous etes arrive a Tristram" );
			printf("Voulez vous maintenant vous diriger vers Avalon(1) ou au Valhalla(2) ?");
			scanf("%d",lieu2.id);
		}

		if (strcmp(ChoixDestination,"Olympe")== 0) {
			printf("%s",lieu3.description);			
			printf ( "vous etes arrive a l'Olympe" );
			printf("Voulez vous maintenant vous diriger vers Midgard(1) ou aller dans l'Eldorado (2) ?");
			scanf("%d",lieu3.id);
		}		
}

int main(){
	
	lieu lieu1 ={"Heilheim", "C'est un lieu brumeux \n", 10, {1,2}};
	lieu lieu2 ={"Tristram", "C'est un lieu sombre \n", 11, {2,3}};
	lieu lieu3 ={"Olympe", "C'est un lieu tres haut perche\n", 18, {3,4}};
	
	lieu lieux[10] = {"Heilheim", "C'est un lieu brumeux \n", 10, {1,2},
					 "Tristram", "C'est un lieu sombre \n", 11, {2,3},
					 "Cieux", "C'est un tres tres lumineux \n", 7, {1,3},
					 "Olympe", "C'est un lieu tres haut perche\n", 18, {3,4},
					 "Asgard", "C'est un lieu tres lumineux\n", 15, {1,4},
					 "Avalon", "C'est un lieu plein d'aventuriers\n", 6, {2,4},
					 "Valhalla","C'est un lieu plein d'ames perdues\n", 12, {2,5},
					 "Midgard","C'est un lieu avec des nains\n", 12, {3,5},
					 "Eldorado","C'est un lieu plein de ressources\n", 12, {3,6}
					 };
					 
	deplacement(lieu1, lieu2, lieu3);
	
	
	return 0;
}