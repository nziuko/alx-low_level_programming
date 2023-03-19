#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 (success)
 */

int main(void)
	{
		const char a = "and that piece of art is useful\"";
		"- Dora Korpar, 015-10-19\n";
		fwrite(STDOUT_FILENO, a, sizeof(a) - 1);
		return (1);
	}
