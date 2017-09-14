#include <stdio.h>


int main(){
	
	int num;
	int factorial = 1;
	
	printf("Type in a number and I will give you n! (ie the factorial)");
	scanf("%d", &num);

	if (num == 0){
		printf("Please pick a number equal to or more than 1\n");
		printf("Type in a number and I will give you n! (ie the factorial)\n");
		scanf("%d", &num);
	}
	else if (num < 0){
		printf("Please pick a number equal to or more than 1\n");
		printf("Type in a number and I will give you n! (ie the factorial)\n");
		scanf("%d", &num);
	}
	else 
	{
		printf("You typed %d\n", num);
	}
	

	// for loop
	int i;
	for (i = 1; i <= num; i++)
	{

		factorial = factorial * i;
	}


	
	printf("The factorial is %d", factorial);
	return 0;
}