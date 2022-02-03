#include <stdio.h>
#include <stdlib.h>

int main() 
{
//	define variable
	int side;
	
	printf("Enter a number for side of the square ");
//	get input
	scanf("%d",&side);
	
	// the above side
	for (int i = 0; i < side; i++)
	{
		printf("* ");
	}
	
	printf("\n");
	
	for (int i = 0; i < side-2; i++)
	{
		printf("*");
		for (int j = 0; j < 2*side-3; j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
//	the botton side
	for (int i = 0; i < side; i++)
	{
		printf("* ");
	}
	return 0;
}