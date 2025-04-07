// C program to find the size of int, char,
// float and double data types

#include <stdio.h>

int main()
{
	int integerType;
	char charType;
	float floatType;
	double doubleType;

	
	printf("Size of int is: %ld", sizeof(integerType));

	

	printf("\nSize of char is: %ld", sizeof(charType));

	
	printf("\nSize of float is: %ld", sizeof(floatType));

	
	printf("\nSize of double is: %ld", sizeof(doubleType));

	return 0;
}
