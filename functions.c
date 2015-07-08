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

Sources  = Formules treegonometry de l'université de Sheffield http://www.shef.ac.uk/polopoly_fs/1.227815!/image/formulas.jpg
 */

#include <math.h>
#include "functions.h" 

int heightTree = 0;
float const PI = 3.14159;

// Return the number of objects
int calObjects( int a_objects )
{
	   return a_objects = (sqrt (17) / 20) * heightTree;
}

// Return the height of the star
int calHeightStar( int b_height )
{
	   return b_height = heightTree / 10;
}

// Return the length of the strings
int calWidthGarlands( int c_width )
{
	   return c_width = ((13 * PI) / 8) * heightTree;
}

// Return the length of the electric garlands
int calWidthGarlandsElectrics( int d_width )
{
	   return d_width = PI * heightTree; 
}
