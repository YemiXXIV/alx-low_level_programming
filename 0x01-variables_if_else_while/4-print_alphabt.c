#include <stdio.h>
/**
 * main - Entry point of the program
 **
 ** Return: Always 0 (success)
 **/
int main(void)
{char letter = 'a';
while (letter <= 'z')
{if
(letter != 'q' && letter != 'e')
{putchar(letter); }
letter++; }
putchar('\n');
return (0); }
