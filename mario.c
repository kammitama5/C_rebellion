#include <stdio.h>
#include <string.h.>
#include <stdlib.h>

int main()
{
	int height;

	printf("Please enter a height");
	scanf("%d", &height);
	printf("Your height is %d\n", height);

	int i;
	int j;
	for (i = 1; i <= height; i++)
	{
		
		for (j = 0; j < height - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("#");
		}
		
		printf("\n");
	}
	return 0;

}