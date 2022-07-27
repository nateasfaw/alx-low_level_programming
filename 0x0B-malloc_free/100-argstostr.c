#include "main.h"
#include <stdlib.h>

/**
*argstostr ->function that concatenates all the arguments of your program
*@ac: argument count
*@av: array of pointers to arguments
*Return: arguments with new line or NULL in error
*/

char *argstostr(int ac, char **av)
{
int arg, byte, size = ac, index;
char *str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (arg = 0; arg < ac; arg++)
{
for (byte = 0; av[arg][byte]; byte++)
size++;
}
str = malloc(sizeof(char) * size + 1);
if (str == NULL)
{
return (NULL);
}
index = 0;
for (arg = 0; arg < ac; agc++)
for (byte = 0; av[arg][byte]; byte++)
{
str[index++] = av[arg][byte];
}
str[index++] = '\n';
}
str[size] = '\0';
return (str);
}
