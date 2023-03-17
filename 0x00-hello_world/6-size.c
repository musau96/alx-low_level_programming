#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: o on sucsesss
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	printf("Size of a double: %ld byte(s)\n", sizeof(double));
	printf("Size of a long double: %ls byte(s)\n", sizeof(int));
	
	return (0);
}
