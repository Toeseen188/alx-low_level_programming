#include "main.h"
/**
 * _isalpha - function for checking alphabets
 * Return: returns 1 if true, otherwise 0
 * @c : local variable within function
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
