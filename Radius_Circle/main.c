#include <stdio.h>
#include <stdlib.h>



int main() 
{
/*
In this program, the user enters the radius.
	then
Calculates enviroment, area and diameter.
*/


	printf("In this program, the user enters the radiusthen Calculates enviroment, area and diameter.\n\n");
	float radius,Enviroment,Area,Diameter;
	/*This part is defined as the fixed number Pi*/
	float Pi = 3.14;
	/*In this section, the user is told to enter the radius.*/
	printf("Please enter the radius :");
	/*Receives input here*/
	scanf("%f",&radius);
	/*This section calculates the 'environment' and in the "Enviroment" variable pours*/
	Enviroment = 2*Pi*radius;
	/*This section calculates the 'area' and in the "Area" variable pours*/
	Area = Pi*radius*radius;
	/*This section calculates the 'Diameter' and in the "Diameter" variable pours*/
	Diameter = 2*radius;
						
	printf("Enviroment : %f", Enviroment );
	printf("\n"); 
	printf("Area : %f", Area);
	printf("\n"); 
	printf("Diameter : %f", Diameter);



	return 0;
}