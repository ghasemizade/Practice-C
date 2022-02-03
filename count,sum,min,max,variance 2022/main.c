#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{	
	int numberofinput;
	int num , count , input;
	int sum;
	
	printf("please enter the number of input :");
	scanf("%d",&numberofinput);
	
	int inputuser[numberofinput];
	count = 0;
	
	for (int num = 0; num < numberofinput; num++)
	{
		count++;
		scanf("%d",&input);
		inputuser[num] = input;
		sum += input;
	}
	printf("number of input user : %d", count ,"\n");
	
	int min = inputuser[1];
	int max = inputuser[1];
	
	for (int num = 0; num < numberofinput; num++)
	{
		if (inputuser[num] < min)
		{
			min = inputuser[num];
		}
		if (inputuser[num] > max)
		{
			max = inputuser[num];
		}
	}
//	print maximum number
	printf("\nmaximum number in this array : %d", max);
//	print minimum number 
	printf("\nminimum number in this array : %d ", min);
//	print sum of numbers
	printf("\nsum of numbers : %d" , sum , "\n");
	
	float avg;
	
	avg = sum / count;
	printf("avrage of numbers : %f" , avg , "\n");
	
	int submission , power , division;
	int variance;
	
	for (int num = 0; num < numberofinput; num++)
	{
		submission = (inputuser[num] - avg);
		power = pow(submission,2);
		division = power / count;
		variance += division; 
	}
	printf("\nVariance : %d" , variance);
	
	
	return 0;
}