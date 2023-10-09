#include <stdio.h>
/**
 * main - Entry point of the program
 **
 ** Return: Always 0 (success)
 **/
int main(void)
{char lowercase = 'a';
char uppercase = 'z';
while (lowercase <= 'z')
{putchar(lowercase);
lowercase++; }
while (uppercase <= 'Z')
{putchar(uppercase);
uppercase++; }
putchar('\n');
return (0); }
