#include <unistd.h>

void custom_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	char message[] = "Betty is Happy!\n";
	int i = 0;

	while (message[i])
	{
	custom_putchar(message[i]);
	i++;
	}

	return (0);
}
