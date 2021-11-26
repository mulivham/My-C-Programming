#include <stdio.h>

int main()

{
    int number = 23232;
    int i = 0;

    while (1)
    {
        printf("%d", i);
        if(i == number) 
        {
            printf("\nWe found It\n");
            break;


        }
        i++;
    }
    return 0;

}