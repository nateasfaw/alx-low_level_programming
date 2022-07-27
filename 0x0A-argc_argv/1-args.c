#include <stdio.h>

/**
*main -> prints the number of inputs
*@argc: parameter of argc
*@argv: an array of a command listed
*Return: 0 for success
*/

int main(int argc, char *argv[] __attribute((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
