#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	printf("please enter the size :");
	scanf("%d" , &num);
	
	for (int x = 1; x <= num; x++)
	{
		for (int y = 1; y <= num; y++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}


