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
int n, s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	s = n % 10;
	/* your code goes there */
	if (s > 5)
	  {printf("Last digit of %d is %d and is greater than 5\n", n, s); }
	else if (s != 0 && s < 6)
	  {printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s); }
	else
	  {printf("Last digit of %d is %d and is 0\n", n, s); }
	return (0);
}
