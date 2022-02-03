#include <stdio.h>
#include <stdlib.h>

// define find three largest number function
void three_largest(int arr[], int arr_size)
  {
   int i, first, second, third;
  
    if (arr_size < 3)
    {
        printf("Invalid Input");
    }
  
    for (i = 0; i < arr_size ; i ++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
         else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
  
        else if (arr[i] > third)
            third = arr[i];
    }
  
      printf("\nThree largest elements are: %d" , first);
	  printf(", %d",second);
	  printf(", %d", third);
}
// define find three smallest number function
void three_smallest(int arr[], int arr_size)
  {
   int i, first1, second1, third1;
  
    if (arr_size < 3)
    {
        printf("Invalid Input");
    }

    for (i = 0; i < arr_size ; i ++)
    {
        if (arr[i] < first1)
        {
            third1 = second1;
            second1 = first1;
            first1 = arr[i];
        }
         else if (arr[i] < second1)
        {
            third1 = second1;
            second1 = arr[i];
        }
  
        else if (arr[i] < third1)
            third1 = arr[i];
    }
  
      printf("\nThree smallest elements are: %d",first1); 
	  printf(",%d",second1);
	  printf(",%d",third1);
}
// define main function
int main()
{
	int inputnum;
	printf("please enter number of input number :");
	scanf("%d" , &inputnum);
    int nums[inputnum];
    
    for (int i = 0; i < inputnum; i++)
    {
    	scanf("%d",&nums[i]);
	}
	
    int n = sizeof(nums)/sizeof(nums[0]);
    printf("Original array: ");
    
    for (int i=0; i < n; i++)
	{ 
    	printf("%d ,", nums[i]);
    }
    
    three_largest(nums, n);
    three_smallest(nums, n);
    return 0;
}