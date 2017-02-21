/*
 * =====================================================================================
 *
 *       Filename:  neutrons_hw5_task2.c
 *       	Usage:  ./neutrons_hw5_task2.c
 *    Description:  display a table of miles converted to kilometers
 *
 *        Version:  1.0
 *        Created:  02/17/2017 09:48:41 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Christopher Bowen (), christopherbowen@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

/* Function Prototypes */
//make my function and then i put it at the bottom
//its parameters are the three questions it asks first
float MitoKm(int miles);
/* Main Program */
int main(void)
{
	// first i ask the user to enter in the info that they wanted
	int miles, endmiles, increments;
	printf("Enter the starting miles: ");
	scanf("%d", &miles);
	printf("Enter the ending miles: ");
	scanf("%d", &endmiles);
	printf("Enter the increments: ");
	scanf("%d", &increments);
	printf("Miles\t=\tKilometers\n");
	for(int x=0;x<endmiles;x+=increments)
	{
		float km;
		km=MitoKm(miles);
		printf("%5.2d\t%10.2f\n",miles, km);
		miles+=increments;
	}

	return 0;
}
float MitoKm(int m)
{
	float f=m*1.61;
	return f;
}


/* Function Defenitions */


