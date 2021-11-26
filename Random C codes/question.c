// Coding libraly below 
//#include <stdio.h>
//#include <maths.h>
//#include <graphics.h>
//#include <conio.h>
//#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// void (means nothing)
int main()
{
        printf("Say something:\n");
        char something[40];
        scanf("%39s", something);
        printf("%s!!! Awesome, Who are you?\n", something);
		char name[10];
		scanf("%9s", name);
		printf("Hey %s ,I'm Kali 'The Computer', Mulivha made Me\nWhasup?? \n", name);
        char ask[30];
        scanf("%29s", ask);
        printf("Glad you %s, %s. Can i ask you something?\n", ask, name);
        char yeh[10];
        scanf("%9s", yeh);
        printf("Did you just said %s?, Great, How old are you?\n",yeh);

        /* PLEASE NOTE THAT 
        Int = integer( dealing with numbers and sign %id)
        Char = character ( dealing with alphbert and sign %s, '')
        */

        int age;
	    //printf("Please enter your age frank : ");
        scanf("%i", &age ); //address of operator	
	    int frank = 2 * age;
	    printf("Your will be %i years, in %i years, You very old, Lets play\n", frank, age);

        /* CONCETRATION ON ( IF & ELSE STATEMENT) */

        // output result
	    // seed - rom the clock
	    int maxValue;
	    maxValue = 10;
	    srand(time(NULL));
	    int randomNumber = rand() % maxValue + 1;

	    //printf("%d\n", randomNumber); // answer

	    // modulus operator %
	    //reminder of some division

	    printf("Guess a Number 0 - %d : ", maxValue);
	    int input;
	    scanf("%d", &input);
	
	    if(input == randomNumber)
       	{
		printf("You Win!\n");
		
	    }
	     else
       	{

		 int maxValue;
	     maxValue = 10;
	     srand(time(NULL));
	     int randomNumber = rand() % maxValue + 1;
	   
		 printf("HardLuck! Guess again 0 - %d : ", maxValue);
         int input;

	     scanf("%d", &input);
		 if(input == randomNumber)
       	 {
		  printf("You Win!\n");
		
		  printf("Pick A car\n");
	     }
	      else
       	 {

		  printf("Sorrrrrrrrrrrrrrrrrry! Try again, next time (-_-)\n");
		 
	     }

		
	    }

    printf("Now Choose A Car 1 - 6 : \n");
	printf("1 - Bmw\n");
	printf("2 - Audi\n");
	printf("3 - Toyota\n");
	printf("4 - Benz\n");
	printf("5 - Ford\n");
	printf("6 - Mazda\n");
	printf("7 - Nissan\n");

	int inp;
	scanf("%d", &inp);
	
	if (inp == 1)
	{
	       	printf("German merchine \n");
       	}
	else if (inp == 2)
	{
		printf("for a gentlemen, are you a gentleman, %s?\n", name);
	}
	else if (inp == 3)
	{
		printf("japanese machine\n");
	}
	else if (inp == 4)
	{
		printf("Very expansive that one, Not sutable for a guy with the age of %d, Try other\n", age);
	}
       	else if (inp == 5)
	{
		printf("American Machine\n");
	}
       	else if (inp == 6)
	{
		printf("I think she is australian\n");
	}
	else if (inp == 7)
	{
		printf("Japenese machine\n");
	} 

        return 0;
        

}

