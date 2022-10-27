#include<stdio.h>
int a[10000] = { 1,1 };
int main(void)
{
	int i, j, k, n;
	scanf_s("%d", &n);
	while (n--)
	{
		scanf_s("%d", &k);
		for (i = 2; i <= k; i++)
		{
			a[i] = a[i - 1] + a[i - 2];
		}
		printf("%d\n", a[k - 1]);
	}

}