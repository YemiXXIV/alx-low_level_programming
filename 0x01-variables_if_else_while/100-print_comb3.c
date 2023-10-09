#include <stdio.h>
/**
 * main - Entry point of program
 **
 ** Return: Always 0 (success)
 **/
int main(void)
{int firstnumber, secondnumber;
for (firstnumber = 0; firstnumber <= 8; firstnumber++)
{for
(secondnumber = firstnumber + 1;
secondnumber <= 9;
secondnumber++)
{putchar(firstnumber + '0');
putchar(secondnumber + '0');
if (firstnumber != 8 || secondnumber != 9)
{putchar(',');
putchar(' '); } } }
putchar('\n');
return (0); }
