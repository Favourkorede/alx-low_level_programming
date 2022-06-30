#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description 'A C program that prints the size of cha, int,...'
 *Return: Always 0 (success)
*/
int main(void)
{
	char ch = ' ';
	int int_num = 0;
	float flt = 0.0f;
	long int lng_int = 0;
	long long int lng_lng_int = 0;

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
