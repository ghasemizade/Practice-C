#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("this program can be draw empty triganle\n");
	
    int inputside;
    printf("Enter the side triangle : "); 
	scanf("%d",&inputside);

    for (int i = 1; i <= inputside; i++)
    {
        
        for (int j = 1; j <= (inputside - i); j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i * 2 - 1; k++)
        {
//            define condition
            if (k == 1 || k == i * 2 - 1)
            {
                printf("*");
            }
            else if (i == inputside)
            {
//                print start
                printf("*");
            }
            else
            {
//                print space
                printf(" ");
        	}
        }
        printf("\n");
    }
    return 0;
}