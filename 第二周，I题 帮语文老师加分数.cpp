#include<stdio.h>
#define k 1000010
int a[k];
int main(void)
{
	int n, p, i, l, r, z, min;
	scanf_s("%d %d", &n, &p);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < p; i++)
	{
		scanf_s("%d %d %d", &l, &r, &z);
		for (int j = l; j <= r; j++)
		{
			a[j] += z;
		}
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] < a[i + 1])
			min = a[i];
	}
	printf("%d", min);
}
