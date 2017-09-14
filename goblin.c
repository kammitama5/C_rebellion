#include <stdio.h>
#include <string.h.>
#include <stdlib.h>

int main(){
	
	char player[80];
	char answer[1];
	char choice[1];
	char weapon[1];

	printf("Welcome to Beat the Goblin!");
	printf("What is your name, dear Player?\n");
	gets(player);
	printf("Okay %s, ready to start?\n", player);

	printf("Press y for yes\n");
	gets(answer);


	if (*answer == 'y')
	{
		printf("Let's start!\n");
	
	// You are walking through a dark forest. 
	printf("You are walking through a dark forest\n");
	// You have to choose a path. Will you choose left or right?
	printf("You have to choose a path. Will you choose l(eft) or r(ight) Choose l or r?\n");

	gets(choice);
	// if you choose left, you fall down a hole and die
	if (*choice == 'l')
	{
		printf("Oh noes! You fell down a hole! You died!\n");
	}
	else if (*choice == 'r')
	{
		// if you choose right, you encounter a hairy, smelly goblin.
		// would you like to choose a cutlass or a gun?
		printf("Through the darkness, you see a hairy, smelly goblin! Choose your weapon!\n");
		printf("Would you like a cutlass or a gun? Pick c for cutlass or g for gun\n");

		gets(weapon);
		// if you choose a gun, you shoot, and it isn't loaded! 
		// The goblin lunges forward and strangles you to death, while feasting on your flesh
		if (*weapon == 'g')
		{
			printf("The goblin lunges forward and strangles you to death!\n");
			printf("He has feasted on your moist human flesh!\n");
			printf("GAME OVER!!\n");
			return 0;
		}
		// if you choose a cutlass, with one strike, you hit the goblin
		// green blood oozes out, and you faint. Congrats, you won the game!
		else if (*weapon == 'c')
		{
			printf("With one strike, you hit the goblin!!!\n");
			printf("Green blood oozes out, and you faint!\n");
			printf("\n");
			printf("\n");
			printf("EPILOGUE....Congrats! You have beaten the Goblin!\n");
		}
	}
	
	

	}

	else{
		printf("Sorry to see you go. Have a great day!\n");
		return 0;
	}

	return 0;
}