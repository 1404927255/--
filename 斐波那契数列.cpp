#include<stdio.h>
int a[10000] = { 1,1 };
int main(void)
{
	int i, j, k;
	scanf("%d", &k);
	for (i = 2; i <= k; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	printf("%d", a[k - 1]);
}