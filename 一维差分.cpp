#include<stdio.h>
#define k 10010
int a[k], b[k];
int main(void)
{
	int n, l, r, i, m;
	scanf_s("%d", &m);
	for (i = 1; i <= m; i++)
	{
		scanf_s("%d", &a[i]);
		b[i] = a[i] + b[i - 1];
	}
	scanf_s("%d %d %d", &l, &r, &n);
	for (i = l; i <= r; i++)
	{
		b[i] += n;
	}
	printf("%d\t%d\t%d\t%d", b[l - 1], b[l], b[r], b[r + 1]);
}