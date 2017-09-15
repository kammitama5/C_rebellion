#include <stdio.h>
#include <string.h.>
#include <stdlib.h>

int main()
{
	float input = 5.0;

	// make sure input is valid
	while(input < 0); 
	{
		printf("Please enter dollars and cents eg 1.40\n");
		scanf("%f", &input);
		
	}
	
	printf("You entered %.2f\n", input);
	
	// convert dollars to cents
	int dollars_to_cents = input * 100;
	printf("Cents : %d", dollars_to_cents);

	// keep track of coins (number)
	int total_coins = 0;

	// always use largest coin possible

	// quarters
	while(dollars_to_cents >= 25)
	{
		dollars_to_cents = dollars_to_cents - 25;
		total_coins = total_coins + 1;
	}

	
	//dimes 
	while(dollars_to_cents >= 10)
	{
		dollars_to_cents = dollars_to_cents - 10;
		total_coins = total_coins + 1;
	}

	
	//nickels
	while(dollars_to_cents >= 5)
	{
		dollars_to_cents = dollars_to_cents - 5;
		total_coins = total_coins + 1;
	}

	//cents
	while(dollars_to_cents >= 1)
	{
		dollars_to_cents = dollars_to_cents - 1;
		total_coins = total_coins + 1;
	}
	
	printf("Total coins: %d", total_coins);

	return 0;
}




