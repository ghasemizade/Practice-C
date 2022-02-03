#include <stdio.h>
#include <stdlib.h>

int main() 
{
//	variable defining
	int num;
	printf("please enter the number :");
//	input difining
	scanf("%d",&num);
	printf("Divisor :");
//	loop difining
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d",i,",");
		}
	}
	return 0;
}