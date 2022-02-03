#include <stdio.h>
#include <stdlib.h>

int main() {
//	define input
	int num;
	
	printf( "please enter the number :");
//	get input
	scanf("%d" , &num);
	

	printf("The divine ratio of your input number : %d" , num/1.618);
	printf("\nThe divine ratio of your input number : %d" , num*1.618);
	
	
	return 0;
}