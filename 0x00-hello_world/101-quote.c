#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the exact phrase "and that piece of art is useful"
 *              - Dora Korpar, 2015-10-19, followed by a new line, to the
 *              standard error.
 * Return: 1
 */
int main(void)
{
    char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    int len = 59;

    write(2, str, len);
    return (1);
}

