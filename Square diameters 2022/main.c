#include <stdio.h>
#include <stdlib.h>

//define function
void square(int lenght) {
//	start loop for draw dimeters
	for (int loop = 1; loop <= lenght; loop++) 
	{
		for (int v = 1; v <= lenght; v++) {
			if (loop == v) {
				printf("* ");
			}
			else if (v == (lenght + 1) - loop) {
				printf("* ");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

}
//main funciton
int main() {
	int lenght;
	printf("Please enter the Square Lenght: ");
//	get input
	scanf("%d",&lenght);
	square(lenght);

	return 0;
}