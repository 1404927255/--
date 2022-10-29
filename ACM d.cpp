#include<stdio.h>
#define p 100001
int a[p], b[p];
long long n, i, m, q, w;
int main()
{
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf_s("%lld", &a[i]);
		if (a[i] < 0)
		{
			a[i] = 0;
		}
		b[i] = a[i] + b[i - 1];
	}
	scanf_s("%lld", &m);
	while (m--)
	{
		long long sum;
		scanf_s("%lld %lld", &q, &w);
		sum = b[w] - b[q - 1];
		printf("%lld\n", sum);
	}
	return 0;
}