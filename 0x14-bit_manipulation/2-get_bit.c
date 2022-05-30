/**
 * get_bit - function that return the value of a given index
 * @n: param, value
 * @index: index param
 * Return: value at a given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (8 * sizeof(n) - 1))
	return (-1);

	else
	return ((n >> (index)) & 1);
}
