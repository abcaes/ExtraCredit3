#include <stdio.h>
#include <conio.h>

int main(void)
{
	float x = 0;

	printf("please enter a float value:");
	scanf("%f", &x);
	printf("\nThe value entered was %f", x);

	_getch();

	return 0;
}