#include <stdio.h>
#include <stdlib.h>

int main ()
{
	// subtitle
	printf("This project is for symmetrical number.\n");
	// variables
	int incomingNum, stashNumMod, incomingNumReverse=0, doubleReverse=0;
	char s;
	printf("Enter a symbol for drop between numbers ");
	scanf("%c", &s);
	
	// incoming
	printf("Enter a number for enable format ");
	scanf("%d",&incomingNum);
	
	
	// variables
	int incomingNumStash=incomingNum;
	
	// the operations	
	while (incomingNum>0)
	{
		stashNumMod=incomingNum%10;
		incomingNum=incomingNum/10;
		incomingNumReverse=incomingNumReverse*10+stashNumMod;
	}

	
	while (incomingNumReverse>0)
	{
		stashNumMod=incomingNumReverse%10;
		incomingNumReverse=incomingNumReverse/10;
	
		// output	
		printf("%d",stashNumMod);
		printf("%c",s);
	}
	
	
	return 0;
}