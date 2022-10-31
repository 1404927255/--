#include<stdio.h>
#define p 1020
int a[p][p], b[p][p];
int t, k, i, j;
int main(void)
{
	scanf("%d", &t);
	while (t--)
	{
		int m, n, x, y, tem = 0;
		scanf("%d %d %d %d", &m, &n, &x, &y);
		if (x > m || y > n)
		{
			break;
		}
		for (i = 1; i <= m; i++)
		{
			for (j = 1; j <= n; j++)
			{
				scanf_s("%d", &a[i][j]);
				b[i][j] = a[i][j] + b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
			}
		}
		for (i = 1; i <= m - x + 1; i++)
		{
			for (j = 1; j <= n - y + 1; j++)
			{
				if (b[i + x - 1][j + y - 1] - b[i + x - 1][j - 1] - b[i - 1][j + y - 1] + b[i - 1][j - 1] > tem)
				{
					tem = b[i + x - 1][j + y - 1] - b[i + x - 1][j - 1] - b[i - 1][j + y - 1] + b[i - 1][j - 1];
				}
			}
		}
		printf("%d", tem);
	}
}