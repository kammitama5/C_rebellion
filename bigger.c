#include <stdio.h>

int bigger(int a, int b){
	if (a  == b){
		printf("Both numbers are the same");
		return a; 
	}
	else if (a > b){
		printf("Bigger number is %d", a);
		return a;
	}
	else{
		printf("Bigger number is %d", b);
		return b;
	}
}
int main(){
	int a;
	int b;

	// make sure user enters number one by one
	printf("Type two numbers one by one\n");
	printf("Enter a number:\n");
	scanf("%d", &a);
	printf("Enter another number:\n");
	printf("First:%d\n", a);
	scanf("%d", &b);
	printf("Second:%d\n", b);

	// give me bigger -> run function
	bigger(a, b);

	return 0;
}