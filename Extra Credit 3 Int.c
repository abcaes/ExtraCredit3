#include <stdio.h>
#include <conio.h>

int main(void)
{
	int x = 0;

	printf("please enter an integer value:");
	scanf("%d", &x);
	printf("\nThe value entered was %d", x);

	_getch();

	return 0;
}