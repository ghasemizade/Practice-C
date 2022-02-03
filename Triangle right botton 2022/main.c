#include <stdio.h>
#include <stdlib.h>

int main() 
{
//	define varivable
	int triangle;
	printf("please enter triangle size :");
//	get input
	scanf("%d", &triangle);
//	define first loop
	for (int star = triangle; star >= 1; --star)
	{
//		define second loop
		for (int star1 = 1; star1 <= star; ++star1)
		{
			printf("*");
		}
		printf("\n");   
	}
		  return 0;         
}