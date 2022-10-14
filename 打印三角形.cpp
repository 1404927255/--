#include<stdio.h>
int main(void)
{
	char input;
	int i, j;
	scanf_s("%c", &input);
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 3 - i; j++)
			printf(" ");
		for (j = 1; j < 2 * i; j++)
			printf("%c", input);
		printf("\n");

	}
}
