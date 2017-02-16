/*
 * =====================================================================================
 *
 *       Filename:  neutrons_hw5_task1.c
 *       	Usage:  ./neutrons_hw5_task1.c
 *    Description: the calculation for the second moment of inertia  
 *
 *        Version:  1.0
 *        Created:  02/14/2017 04:38:00 PM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Christopher Bowen (), christopherbowen@mail.weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */

/* Function Prototypes */
float AnnulusMoment(float r2, float r1);
/* Main Program */
int main(void)
{
	// define my user input and then ask them for it 
	float r2, r1;
	printf("please insert the number for your outer radius: ");
	scanf("%f", &r2);
	printf("please insert the number for your inner radius: ");
	scanf("%f", &r1);
	float I = AnnulusMoment(r2,r1);
	printf("the second moment of inertia is %.2f\n", I);
	return 0;
}
float AnnulusMoment(float i, float j)
{
	float f=0;
	f = (3.14/4)*((i*i*i*i)-(j*j*j*j));
	return f;
}

/* Function Defenitions */


