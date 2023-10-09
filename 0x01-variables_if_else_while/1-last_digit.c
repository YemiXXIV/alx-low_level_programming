#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Last digit of a variable
 *
 * Return:always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	  {printf("last digit of %d is greater than 5\n", n); }
	else if (n != 0 && n < 6)
	  {printf("last digit of %d and is less than 6 and not 0\n", n); }
	else
	  {printf("last digit of %d and is 0\n", n); }
	return (0);
}
