#include <stdio.h>

int main()
{
	int pizzas_to_eat = 100;

	printf("pizzas_to_eat : %i\n", pizzas_to_eat);

	pizzas_to_eat ++;
	printf("pizzas_to_eat : %i\n", pizzas_to_eat);

	pizzas_to_eat -= 2; 
	pizzas_to_eat += 2;
	pizzas_to_eat *= 2;
	pizzas_to_eat /= 2;
	pizzas_to_eat %= 2;
	// PizzaToEat // you can use lowwer// upper case
	printf("pizzas_to_eat : %i\n", pizzas_to_eat);
	return 0;
}
