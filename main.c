#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define OUI 1

float const PI = 3.14159;
int sortir, boules, heightTree, star, garlandsElecs, garlands = 0;

int main()
{
	do 
	{
		printf("Hauteur de l'arbre (cm): ");
		scanf("%d", &heightTree);
		printf("\n%d boules\n", boules = ( sqrt(17)/20) * heightTree);
		printf("%d cm de guirlandes simple \n", garlands = ( (13 * PI) / 8 ) * heightTree);
		printf("%d cm de guirlandes électriques\n", garlandsElecs = PI * heightTree);
		printf("Une étoile ou un ange de %d cm de hauteur\n\n", star = heightTree / 10);

		printf("Voulez-vous recommencer ? (Oui=1,Non=0)");
		scanf("%d" , &sortir); 
	} while ( sortir == 1);

	if(sortir == 0){ exit(EXIT_SUCCESS); } else { return OUI; }
}

 
