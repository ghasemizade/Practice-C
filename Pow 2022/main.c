#include <stdio.h>
#include <stdlib.h>



int main() 
{
/*This App takes one number from user then Reaches powers 1, 2 and 3*/


	int x;
	printf("please enter ther number :");
	scanf("%d" , &x);

	printf("pow1 : %d\n", x); 
	printf("pow2 : %d\n" , x*x);
	printf("pow3 : %d" , x*x*x);

	return 0;
}