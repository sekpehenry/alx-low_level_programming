#include <stdio.h>

/**
 * main - function
 * @argc: offset count
 * @argv: offset value
 * Return: 0
 */


int main(int argc, char *argv[])
{
        int i=0;
        while(argv[i])
        {
                printf("%s\n", argv[i]);
                i++;
        }
        return (0);
}
