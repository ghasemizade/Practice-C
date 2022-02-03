#include <stdio.h>
#include <stdlib.h>

int main ()
{
	// subtitle program
	printf("This consule app is about for Expansion of Pi number.\n");
	
	// variables
	double radius, circumference, pi;
	float p = 3.14;
	
	printf("Enter a number for radius ");
//	get input 
	scanf("%lf" , &radius);
	
	// the operation
	circumference = 2 * p * radius;
	pi = circumference / radius;
	
	// output
	printf("The expansion of Pi number is = %f" , pi);
	
	return 0;
}