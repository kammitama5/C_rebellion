#include <stdio.h>

int main(){


	int integer = 5;
	int integer1 = 8;

	if (integer % 2 == 0){
		printf("Integer 1 is even \n");
	}
	else if (integer % 2 != 0){
		printf("Integer 1 is odd \n");
	}

	if (integer1 % 2 == 0){
		printf("Integer 2 is even \n");
	}
	else if (integer1 % 2 != 0){
		printf("Integer 2 is odd \n");
	}
	
	return 0;
}