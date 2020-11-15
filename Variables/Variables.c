/*
 ============================================================================
 Name        : Variables.c
 Author      : Alberto Costa
 Description : Le varibili primitive nel linguaggio C
 ============================================================================
 */

#include <stdio.h>
#include<limits.h>
#include<float.h>

int main(void) {

	/*
	 TIPI DI VARIABILI
	 int, char, float, double
	*/

	// variabile intera --> 32 bit di memoria
	int number = 0;
	// variabile carattere
	char character = 'a';
	// variabile float
	float decimalNumber = 1.2;
	// variabile double
	double anotherDecimanNumber = 2.3;

	printf("Tipi variabili\n\n");

	printf("La variabile number vale: %d\n", number);
	printf("La variabile character vale: %c\n", character);
	printf("La variabile number vale: %f\n", decimalNumber);
	printf("La variabile number vale: %f\n\n", anotherDecimanNumber);

	/*
	 QUALIFICATORI
	 short, long
	 signed, unsigned
	*/

	printf("Qualificatori\n\n");

	printf("%30s %12s %28s\n", "", "Size (bytes)", "Range");

	// char

	printf("%-30s %10d %25d - %d\n", "char or signed char", sizeof(char), CHAR_MIN, CHAR_MAX);
	// char senza segno
	printf("%-30s %10d %25d - %d\n", "unsigned char", sizeof(unsigned char), 0, UCHAR_MAX);

	// int

	// interi
	printf("%-30s %10d %25d - %d\n", "int or signed int", sizeof(int), INT_MIN, INT_MAX);
	// interi positivi
	printf("%-30s %10d %25d - %ud\n", "unsigned int", sizeof(unsigned int), 0, UINT_MAX);
	// interi short
	printf("%-30s %10d %25hd - %hd\n", "short int or short signed int", sizeof(short int), SHRT_MIN, SHRT_MAX);
	// interi short e senza segno
	printf("%-30s %10d %25d - %d\n", "unsigned short int", sizeof(unsigned short int), 0, USHRT_MAX);
	// interi long
	printf("%-30s %10d %25ld - %ld\n", "long int or signed long int", sizeof(long int), LONG_MIN, LONG_MAX);
	// interi long e senza segno
	printf("%-30s %10d %25d - %lu\n", "unsigned long int", sizeof(unsigned long int), 0, ULONG_MAX);

	// float

	printf("%-30s %10d %25f - %f\n", "float", sizeof(float), FLT_MIN, FLT_MAX);

	// double

	printf("%-30s %10d %25f - %f\n", "double", sizeof(double), -DBL_MAX, DBL_MAX);

	return 0;
}
