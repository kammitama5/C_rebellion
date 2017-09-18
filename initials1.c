#include <stdio.h>
#include <string.h.>
#include <stdlib.h>


int main()
{

	// define spaces for string name
	char name[80];
	//char capitals = '';
	
	// allow user to input and take first value
	printf("Please enter your name with no spaces and I will give you back the Initials\n");
	scanf("%s",name); 
	printf("You typed %s\n", name);
	
	int i;
	for (i = 0; i <= strlen(name); i++){
		if (name[i] == toupper(name[i])){
			printf("%c", name[i]);
		}
	}

	//printf(capitals);
	



	return 0;
}