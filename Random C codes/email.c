#include <stdio.h>

int main()
{
	int age;
	printf("Please enter your age frank : ");

	scanf("%i", &age ); //address of operator
	
	int frank = 2 * age;

	printf("frank your age after %i years is : %i\n", age, frank);
	return 0;
}
