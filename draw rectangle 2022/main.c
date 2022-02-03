#include <stdio.h>
#include <stdlib.h>

int main() {
//	define input 
	int length, width;
	
	printf("please enter the length :");
//	get input length
	scanf("%d" , &length);
	printf("please enter the width :");
//	get input width
	scanf("%d" , &width);
	
//	define loop 
	for (int i = 1; i <= width; i++)
	{
		printf("\n");
		for (int j = 1; j <= length; j++)
		{
			printf("* ");
		}
	}
	return 0;
}