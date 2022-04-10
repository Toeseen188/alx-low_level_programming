#include <stdio.h>
char c;
int i;
float f;
long int l;
long long int m;
/**
 *main-main entry for all c program
 *Return: returning 0 means its a success
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(l));
	printf("Size of a long long: %lu byte(s)\n",(unsigned long)sizeof(m));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
	return (0);
}
