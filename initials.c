#include <stdio.h>
#include <string.h.>
#include <stdlib.h>


int main()
{

	// define spaces for string name
	char name[80];
	
	// allow user to input and take first value
	printf("Please enter your name and I will give you back the Initial\n");
	scanf("%s",name); 
	printf("You typed %s", name);
	printf("First element: %c", name[0]);
	



	return 0;
}