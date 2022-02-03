#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	// subtitle
	printf("***This project is for draw a 4 shapes***\n\n\n");
	
	// shape
	printf("		***circle***		\n");
	
	// variable
	float radius,k;
	
	printf(" Enter the Radius of the circle size ");
	scanf("%f",&radius);//get input
	
	// variable
	float temp_num = 2;

	printf("\n\n\n");
	
	// shape
	printf("		***triangle***		\n");
	// variable
	int triangle;
  	
  	// variables for loop
  	int i, j, h, z, g, r;
  	printf("Enter a number for draw a triangle ");
  	// get input
  	scanf("%d",&triangle);
  	
  	printf("\n\n\n");
  	
	// square 
	printf("		***square***		\n");
	
	// define variable	
	int side;
	
	printf("Enter a number for side of the square ");
	// get input
	scanf("%d",&side);
	
	printf("\n\n\n");
	
	// rectangle
	printf("		***rectangle***		\n");
	
	// define variable
	int width, len;
	
	printf("Enter a number for length of the Rectangle ");
	// get input
	scanf("%d",&len);
	
	printf("Enter a number for width of the Rectangle ");
	//get input
	scanf("%d",&width);
	
	// draw Circle
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
	
	
  	
  	// draw triangle
  	for (i=0; i<=triangle; i++) 
  	{
  		for (j=0; j<i; j++) 
  		{
    		printf("* ");
    	}
    
		printf("\n");
  	}
	
	printf("\n\n\n");
	
	
	// the operation & output
	for (i = 0; i < side; i++)
	{
		printf("* ");
	}
	
	printf("\n");
	
	for (h = 0; h < side-2; h++)
	{
		printf("*");
		
		for (j = 0; j < 2*side-3; j++)
		{
			printf(" ");
		}
		
		printf("*\n");
	}
	
	for (z = 0; z < side; z++)
	{
		printf("* ");
	}
	
	printf("\n\n");
	
	
	// draw rectangle
	for (i = 0; i < len; i++)
	{
		printf("* ");
	}
	
	printf("\n\n");
	
	for (j = 0; j < width - 2; j++)
	{
		printf("*");
		for (z = 0; z < 2 * len - 3; z++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	
	for (h = 0; h < len; h++)
	{
		printf("* ");
	}
	
 return 0;

}