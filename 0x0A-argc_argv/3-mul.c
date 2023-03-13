#include <stdio.h>

/**
 * main - function
 * @argc: offset count
 * @argv: offset value
 * Return: 0
 */


int main(int argc, char *argv[])
{
        if (argc !=3)
        {
                printf("Error\n");
                return (1);
        }

        int sum;
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf ("%d\n", sum);
        return 0;
}
