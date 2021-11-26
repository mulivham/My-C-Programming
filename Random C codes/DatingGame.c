#include <stdio.h>

int main()
{

	printf("Choose A Girlfreind 1 - 6 : \n");
	printf("1 - Neo\n");
	printf("2 - Thendo\n");
	printf("3 - Phindulo\n");
	printf("4 - Nthabiseng\n");
	printf("5 - Petunia\n");
	printf("6 - Abueng\n");
	printf("7 - Which Girl Is Fit To Be Your Wife?\n");

	int input;
	scanf("%d", &input);
	
	if (input == 1)
	{
	       	printf("She is funny, sexy, playfull\n");
       	}
	else if (input == 2)
	{
		printf("She is so lovely, serious, quet\n");
	}
	else if (input == 3)
	{
		printf("She is hardcore, life move on\n");
	}
	else if (input == 4)
	{
		printf("She is so unique, down on earth\n");
	}
       	else if (input == 5)
	{
		printf("She loyal, commited, beautiful\n");
	}
       	else if (input == 6)
	{
		printf("She is high, pridefull\n");
	}
	else if (input == 7)
	{
		printf("Thendo\n");
	}

	return 0;
}

