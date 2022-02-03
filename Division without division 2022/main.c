#include <stdio.h>
#include <stdlib.h>

int main() {
//	difine input
	int num1;
	int num2;
	int mod;
	int d;
	printf ("please enter the first number :");
//	get input
	scanf("%d" , &num1);
//	get input
	printf("please enter the second number :");
	scanf("%d" , &num2);
	
	mod = num1;
	d = 0;
//	define loop
	for (int i = 0; ; i++)
	{
		if (mod >= num2)
		{
			d++;
			mod -= num2;
		}
		else
		{
			break;
		}
	}
	printf("Divisible by : %d",d);
	printf("\nleft over : %d" , mod);
	
	return 0;
}