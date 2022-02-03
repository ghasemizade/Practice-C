#include <stdio.h>
#include <stdlib.h>

int main() 
{
//	define input
	int num;
	int sum;
	printf("please enter the number :");
//	take input
	scanf("%d" , &num);
	sum = 0;
//	define loop
	for(int i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}
	if (sum == num)
	{
		printf("yes");
	}
	else 
	{
		printf("no");
	}
			
	return 0;
}