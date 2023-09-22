#include <stdio.h>

int main(void)
{
	int num1, num2, sum;

    /* Input the first number */
	puts("Enter the first number:");
	scanf("%d", &num1);

    /* Input the second number */

    puts("Enter the second number:");
    scanf("%d", &num2);

    /* Calculate the sum */

    sum = num1 + num2;

    /* Display the result */

    puts("The sum of the two numbers is:");

    printf("%d\n", sum);

    return 0;
}
