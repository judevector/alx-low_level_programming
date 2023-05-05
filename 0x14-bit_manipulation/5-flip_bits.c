#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from one
 *             number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int num_fl = 0;

	while (xor_result)
	{
		num_fl += xor_result & 1;
		xor_result >>= 1;
	}

	return (num_fl);
}


