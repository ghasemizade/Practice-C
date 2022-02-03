#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("This app about Recognize equality with its inversion\n");
//	define variable int type
	int inputuser;
	int reverseinputuser = 0;
// 	get input
	printf ("please enter the number :");
	scanf("%d", &inputuser);
	
	int usernumberinputcontainer = inputuser;
	int modinputuseraboveten;
//	define loop 
	while (inputuser > 0)
	{
		modinputuseraboveten = inputuser % 10;
		
		reverseinputuser = reverseinputuser * 10 + modinputuseraboveten;
		
		inputuser = inputuser / 10;
	}
	
	if (usernumberinputcontainer == reverseinputuser)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}