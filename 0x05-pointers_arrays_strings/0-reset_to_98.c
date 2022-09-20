#include "main.h"
/**
 * reset_to_98 -> is a function to updates the value it points to to 98.
 * @n: pointer to n
 */
void reset_to_98(int *n)
{
	int x = 1;
	int *n = &x;
	*n = 98;
}
