#include <stdio.h>
#include <stdlib.h>


int main()
{
	int rows , columns;
	
	printf("please enter the row :");
//	get input columns
	scanf("%d",&rows);
	printf("please enter the columns :");
//	get input columns 
	scanf("%d",&columns);
//	define loops by for
    for(int i = 0; i < rows; i++)
    {
    	for(int j = 0; j < columns; j++)
		{
            if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1) 
            {
                printf("*");
            }
           	else 
            {
                printf(" ");
            } 
        }
        printf("\n");
    }		
 	return 0;
}