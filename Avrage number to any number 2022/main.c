#include <stdio.h>
#include <stdlib.h>

int main() 
{
	
//	Define inputs and variables
	int count,num,sum;
	float avg;
	
	printf("please enter the counter :");
//	Get input
	scanf("%d" , &count);
//	loop definition
	for (int i = 1; i <= count; i++)
	{
		printf("enter the value %d", i);
		printf(" :");
		scanf("%d" , &num);
		sum += num;
	}
	avg = sum / count;
	printf("average of values : %f" , avg);
	return 0;
}