#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: n args
 * @argv: arr args
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
