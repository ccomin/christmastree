/**
This file is a part of christmastree
Copyright (C) 2012 Cédric COMIN

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or 
(at your option) any later version.

This program is distributed in the hope that it will be useful, 
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <stdlib.h>
#include "functions.h" //déclaraction des prototypes

#define OUI 1

int sortir, heightTree, star, garlandsElecs, garlands = 0;

int main()
{
	do 
	{
		printf("\n\n*******************************************\n");
		printf("* Optimize decorating your Christmas tree *\n");
		printf("*******************************************\n\n");
		printf("Hauteur de l'arbre (cm): ");
		scanf("%d", &heightTree);
		printf("\n%d boules\n", calObjects(heightTree));
		printf("%d cm de guirlandes simple \n", calWidthGarlands(garlands));
		printf("%d cm de guirlandes électriques\n", calWidthGarlandsElectrics(garlandsElecs));
		printf("Une étoile ou un ange de %d cm de hauteur\n\n", calHeightStar(star));

		printf("Voulez-vous recommencer ? (Oui=1,Non=0)");
		scanf("%d" , &sortir); 
	} while ( sortir == 1);

	if(sortir == 0)
	{ 
		exit(EXIT_SUCCESS); 
	} else { return OUI; }
}


