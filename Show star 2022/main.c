#include <stdio.h>
#include <stdlib.h>

int main() {
//	define input
	int num,i;
	
	printf("please enter the number of start :");
//	get input
	scanf ("%d" , &num);

	
//	define loop
	for (i = 1; i <= num; i++)
	{
		printf("*");
		
	}
	return 0;
}