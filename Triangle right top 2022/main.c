#include <stdio.h>
#include <stdlib.h>

int main()
{
//	define variable
    int mountstar;
    printf("please enter the mountstar :");
//    Get input
    scanf("%d",&mountstar);
//	define first loop
    for(int star = 1; star <= mountstar; star++)
    {
//    	define second loop
    	for (int star1 = 1; star1 <= star; star1++)
    	{
    		printf("*");
    	}
        	printf("\n");
    }


    return 0;
}