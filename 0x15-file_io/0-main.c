#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program.
 *
 * @ac: Number of command-line arguments.
 * @av: Array of command-line arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        fprintf(stderr, "Usage: %s filename\n", av[0]);
        exit(EXIT_FAILURE);
    }

    n = read_textfile(av[1], 114);
    printf("\n(Printed characters: %li)\n", n);

    n = read_textfile(av[1], 1024);
    printf("\n(Printed characters: %li)\n", n);

    return EXIT_SUCCESS;
}

