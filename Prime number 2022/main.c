#include <stdio.h>
#include <stdlib.h>

int main(){
 int x , y;
 	scanf("%d",&x);
 	y = 0;
 	for(int i = 2; i < x ; i++)
	 {
   		if( x % i == 0 )
		{
   			y = 1;
  	 	} 
	 }
 	if(y == 0)
	{
   		printf("yes");
 	}
 	else
	{
    	printf("no");
 	}
 return 0; 
}
 