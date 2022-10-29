#include<stdio.h>
#define k 1010
int b[k][k], a[k][k];
int main(void)
{
	int i, j, n, m, z;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d", &z);
	while (z--)
	{
		int x, c, v, f;
		scanf("%d %d %d %d", &x, &c, &v, &f);
		for (i = x; i <= v; i++)
		{
			for (j = c; j <= f; j++)
			{
				b[i][j] = a[i][j] ^ b[i][j - 1] ^ b[i - 1][j] ^ b[i - 1][j - 1];
			}
		}
		printf("%d", b[v][f]);
	}
}
