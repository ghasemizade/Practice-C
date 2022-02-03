#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int num;
	int star;
	printf("please enter the number star :");
	scanf("%d", &num);
	
	for (int star = 0; star <= num; star++)
	{
		for (int star1 = 0; star1 < star; star1++)
		{
			printf("* ");
		}
		printf("\n");
	
		for (int space = star; space <= num; space++)
		{
			printf("  ");
		}
	}
	printf("\n");
	return 0;
	
}