#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
//	defined input
	int x;
	int y;
	
	printf("please enter the X :");
//	Get x
	scanf("%d" , &x);
	
	printf("please enter the Y :");
//	Get y
	scanf("%d" , &y);
	double result = pow(x , y); 
//	Perform operations
	printf("X power of Y : %lf " , result);
	

	return 0;
}