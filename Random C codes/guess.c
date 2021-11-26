#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	// output result
	// seed - rom the clock
	int maxValue;
	maxValue = 10;
	srand(time(NULL));
	int randomNumber = rand() % maxValue + 1;

	//printf("%d\n", randomNumber); // answer

	// modulus operator %
	// //reminder of some division

	printf("Guess a Number 0 - %d:", maxValue);
	int input;
	scanf("%d", &input);
	
	if(input == randomNumber)
       	{
		printf("You Win!\n");
	}
	else
       	{
		printf("Sorry! Try again\n");
	}
}

