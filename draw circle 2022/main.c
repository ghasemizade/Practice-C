#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int main()
{
//	define input
	float radius,k;
	printf(" Enter the Radius of the circle size : ");
	scanf("%f",&radius);//get input
	float temp_num = 2;
	// contoroler loop
	for (int count = - radius; count <= radius; count++)
	{
		for (int counter = - radius; counter <= radius; counter++)
		{
			k = ((count * temp_num)/ radius) * ((count * temp_num)/ radius) + (counter / radius) * (counter / radius);
			
			if (k > 0.95 && k < 1.08)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
 return 0;

}