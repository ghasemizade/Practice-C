#include <stdio.h>
#include <stdlib.h>

//Perform multiplication operations without multiplication operators

int main() {
//	difined input
	int a;
	int b;
	int sum;
	int i;
	printf("please enter the first value :");
//	get input
	scanf("%d", &a);
	printf("please enter the second value :");
//	get input
	scanf("%d", &b);
//	difined loop
	for (i = 1; i <= b; i++)
	{
		sum += a;		
	}
	
	printf("%d",sum);
	
	return 0;
	
}
