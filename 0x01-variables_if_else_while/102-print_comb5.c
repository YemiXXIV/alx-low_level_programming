#include <stdio.h>
/**
 * main - Entry point of the program
 **
 ** Return: Always 0 (success)
 **/
int main(void)
{int num1, digit1, num2, digit2;
for (num1 = 0; num1 <= 9; num1++)
{for
(digit1 = 0;
digit1 <= 9;
digit1++)
{for
(num2 = num1 + 1;
num2 <= 9;
num2++)
{for
(digit2 = digit1;
digit2 <= 9;
digit2++)
{putchar(num1 + '0');
putchar(digit1 + '0');
putchar(' ');
putchar (num2 + '0');
putchar(digit2 + '0');
if (!(num1 == 9 && digit1 == 8 && num2 == 9 && digit2 == 9))
{putchar(',');
putchar(' '); } } } } }
putchar('\n');
return (0);
}
