#include <stdio.h>
/**
 * main - entry point of the program
 **
 ** Return: Always 0 (success)
 **/
int main(void)
{int number = 0;
while (number < 10)
{putchar(number + '0');
number++; }
putchar('\n');
return (0); }
