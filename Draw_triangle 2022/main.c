#include <stdio.h>
#include <stdlib.h>




/* 
This program takes three numbers from the user and tells the user
That these three numbers can be triangles
Or not.
 */

int main() {
	/*Here we define the variable*/
	int firstside, secondside, thirdside;
	printf("please enter the firstside :");
	scanf("%d" , &firstside);
	printf("please enter the secondside :");
	scanf("%d" , &secondside);
	printf("please enter the thirdside :");
	scanf("%d" , &thirdside);
	/*Here the triangle validation conditions are defined with if*/
	if (firstside < secondside + thirdside){
		printf ("\n 		This is a Triangle \a");
	}
	else if (secondside < firstside + thirdside){
		printf ("\n 		This is a Triangle \a");
	}
	else if (thirdside <firstside + secondside){
		printf ("\n 		This is a Triangle \a");
	}
	else {
		printf ("Error");
	}
	
	return 0;
}