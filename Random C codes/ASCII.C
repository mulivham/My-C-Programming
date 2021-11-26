#include <stdio.h>

int main()
{
	char ASCII;
	printf("Please enter a character: ");
	scanf("%c", &ASCII);
	printf("The alphabet is equal to: %i\n", ASCII);
	//That is equal to is an example
	
	int integer;
	printf("please enter an integer between 0 - 127 : ");
	scanf("%i", &integer);
	printf( "%c\n", integer);
	
	//Math with ASCII
	char mathz = 'A' + '\t';
	printf("A(65) + \\t(11) = %c(%d)\n", mathz, mathz);
	return 0;
}
