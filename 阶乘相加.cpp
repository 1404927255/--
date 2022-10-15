#include<stdio.h>
int main(void)
{
	int n, i;
	int sum = 1;
	int fax = 0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
		printf("!%d=%d\n", i, sum);
		fax += sum;
	}
	printf("%d", fax);

}
