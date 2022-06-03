#include <stdio.h>

/**
 * prime_num - return the largest prime factor
 * @num: number to analyze
 * Return: Always 0.
*/
long int prime_num(long int num)
{
	long int number;
	int lPrime, nPrime;

	nPrime = 2;
	number = num;

	while (number != 0)
	{
	if (number % nPrime == 0)
	{
	lPrime = number;
	number /= nPrime;
	if (number == 1)
	{										break;
	}										}
	else
	{
	nPrime += 1;									}
	}
	return (lPrime);
}

/**
 * main - check the code
 * Return: Always 0.
*/
int main(void)
{
	printf("%lu\n", prime_num(612852475143));

	return (0);
}
