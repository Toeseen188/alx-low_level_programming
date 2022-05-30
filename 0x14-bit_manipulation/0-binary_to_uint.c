/**
 * binary_to_uint - function to convert 0s and 1s to decimal
 * @b: param char
 *Return: return i
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 0;
	unsigned int i = 0;

	if (!b)
	return (0);

	while (b[c])
	{
	switch (b[c])
	{
		case '0':
		i *= 2;
		break;

		case '1':
		i *= 2;
		i += 1;
		break;

		default:
		return (0);
	}
	c++;
	}
	return (i);
}

