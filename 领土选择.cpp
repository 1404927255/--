#include<stdio.h>
#define p -2147483648
#define k 1010
int b[k][k], a[k][k];
int main(void)
{
	int i, j, n, m, z;
	int y = 0, t = 0;
	scanf_s("%d %d %d", &n, &m, &z);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			scanf_s("%d", &a[i][j]);
			b[i][j] = a[i][j] + b[i][j - 1] + b[i - 1][j] - b[i - 1][j - 1];
		}
	}
	int max = p;
	for (i = 1; i <= n; i++)
	{
		int c = i + z - 1;//右下坐标（c，h），领土边长z
		if (c > n)//判断，如果领土范围超过地图，则程序取消
			break;
		for (j = 1; j <= m; j++)
		{
			int h = j + z - 1;//右下坐标（c，h）
			if (h > m)//同理，领土不能超过地图
				break;
			int tem = b[c][h] + b[i - 1][j - 1] - b[i - 1][h] - b[c][j - 1];
			if (tem > max)
			{
				max = tem;
				t = i;
				y = j;
			}
		}
	}
	printf("%d %d", t, y);
}