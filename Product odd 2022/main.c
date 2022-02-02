#include <stdio.h>
#include <stdlib.h>

int main() {
	
//	Define a variable
	int a;
	int b;
	int product = 1;
	int i , c;
	
	printf ("please enter the first number :");
//	get input1
	scanf("%d" , &a);
	
	printf("please enter the second number :");
//	get input2
	scanf ("%d" , &b);
	
//	Definition of condition
	for (i = a; i <= b; i++)
	{
		if (i % 2 == 1)
		{	
			product *= i;
		}
	}
		c = product;
		printf ("product of odd : %d\n" , c);
	
			
	return 0;
}