#include<stdio.h>
#define p 1020
int a[p][p], x[p][p];
int n, k, i, j;
int counter = 0;
int main(void)
{
	scanf_s("%d %d", &n, &k);
	for (i = 1; i <= n; i++)
	{
		int b, c, d, e;
		scanf_s("%d %d %d %d", &b, &c, &d, &e);
		a[b + 1][c + 1]++;
		a[b + 1][e + 1]--;
		a[d + 1][c + 1]--;
		a[d + 1][e + 1]++;
	}
	for (i = 1; i <= 1000; i++)
	{
		for (j = 1; j <= 1000; j++)
		{
			x[i][j] = a[i][j] + x[i - 1][j] + x[i][j - 1] - x[i - 1][j - 1];
			if (x[i][j] == k)
			{
				counter++;
			}
		}
	}
	printf("%d", counter);
}