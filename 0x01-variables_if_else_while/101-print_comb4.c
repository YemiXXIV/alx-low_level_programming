#include <stdio.h>
/**
 * main - Entry point of the program
 **
 ** Return: Always 0 (success)
 **/
int main(void)
{int firstnumber, secondnumber, thirdnumber;
for (firstnumber = 0;
firstnumber <= 7;
firstnumber++)
{for
(secondnumber = firstnumber + 1;
secondnumber <= 8;
secondnumber++)
{for
(thirdnumber = secondnumber + 1;
thirdnumber <= 9;
thirdnumber++)
{putchar(firstnumber + '0');
putchar(secondnumber + '0');
putchar(thirdnumber + '0');
if (firstnumber != 7 || secondnumber != 8 || thirdnumber != 9)
{putchar(',');
putchar(' '); } } } }
putchar('\n');
return (0); }
