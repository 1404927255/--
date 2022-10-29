#include<stdio.h>
#define k 1010
int b[k][k], a[k][k];
int main(void)
{
	int i, j, n, m, z;
	scanf_s("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			scanf_s("%d", &a[i][j]);
			b[i][j] = a[i][j] ^ b[i][j - 1] ^ b[i - 1][j] ^ b[i - 1][j - 1];
		}
	}
	scanf_s("%d", &z);
	while (z--)
	{
		int x, c, v, f, tem;
		scanf_s("%d %d %d %d", &x, &c, &v, &f);
		tem = b[v][f] ^ b[v][c - 1] ^ b[x - 1][f] ^ b[x - 1][c - 1];
		printf("%d\n", tem);
	}
}
