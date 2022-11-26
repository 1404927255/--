#include<stdio.h>
#include<string.h>
#define p 200001
long long a[p], b[p],c[p],q[p];

int main()
{
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	memset(q, 0, sizeof(q));
	long long n, m,x=2;
	scanf_s("%lld %lld", &n, &m);
	if (m > n)
	{
		long long tem = n;
		n = m;
		m = tem;
	}
	for (long long i = n; i >= 1; i--)
	{
		scanf_s("%lld", &a[i]);
	}
	for (long long j = m; j >=1; j--)
	{
		scanf_s("%lld", &b[j]);
	}
	for (long long z = 1; z <=n+1; z++)
	{
		c[z] += a[z] + b[z]+q[z];
		if (c[z] >= x)
		{
			long long re = c[z];
			c[z] %= x;
			q[z+1] = re / x;
		}
		x+=1;
	}
	if (c[n + 1 ]> 0)
	{
		printf("%lld ", c[n + 1]);
	}
	for (int d =n; d>=1; d--)
	{

		printf("%lld ", c[d]);
	}
}