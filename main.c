#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }

int main()
{
	int a, c;
	char b;
	int (*calculate[])(int,int)={multiply,plus,NULL,minus,NULL,divided};
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	printf("%d",calculate[b-42](a,c));
}
