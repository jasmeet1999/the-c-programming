#include <stdio.h>

main()
{
	float farh,celsius;
	int lower,upper,step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;

	printf("Celsius to Fahrenheit table\n");
	while(celsius <= upper)
	{
		farh = celsius * (5.0/9.0) + 32.0;
		printf("%3.0f %6.1f\n",celsius,farh);
		celsius = celsius + step;
	}
}
