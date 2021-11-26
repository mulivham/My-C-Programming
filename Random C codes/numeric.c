#include <stdio.h>
int main ()

{
	printf("how many dogs do you have? : ");
		double dogs;
	scanf("%lf", &dogs);
	printf("%f\n%e\n%g\n", dogs, dogs, dogs);
       return 0;	
}
