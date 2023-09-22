#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int num1, num2, sum;

	char result_message[50];

	/* Input the first number */
	write(STDOUT_FILENO, "Enter the first number:\n", 25);
	scanf("%d", &num1);

	/* Input the second number */
	write(STDOUT_FILENO, "Enter the second number:\n", 26);
	scanf("%d", &num2);

	/* Calculate the sum */
	sum = num1 + num2;

	/* Convert the sum to a string */

	snprintf(result_message, sizeof(result_message), "The sum is: %d\n", sum);

	/* Display the result using write */
	write(STDOUT_FILENO, result_message, sizeof(result_message));

	return 0;
}
