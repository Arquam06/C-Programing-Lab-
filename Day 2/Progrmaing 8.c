#include <stdio.h>
int main()
{
    float value_f, value_c, c, f;

    printf("Enter the value in Fahrenheit: ");
    scanf("%f", &value_f);

    printf("Enter the value in Celsius: ");
    scanf("%f", &value_c);
	c = (value_f - 32) * (5.0 / 9.0);
	f = (value_c * (9.0/5.0)) + 32;

    printf("Fahrenheit to Celsius is = %.2f\n", c);
    printf("Celsius to Fahrenheit is = %.2f\n", f);

    return 0;
}
