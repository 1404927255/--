#include<stdio.h>
#define P 1000010
long long arr1[P], arr2[P];
int main()
{
	long long  n, k;
	int m = 0;
	scanf_s("%lld %lld", &n, &k);
	for (int i = 1; i < n; i++)
	{
		scanf_s("%lld", &arr1[i]);
	}
	for (int i = 1; i < n; i++)
	{
		arr2[i] = arr1[i] + arr2[i - 1];
	}
	for (int i = 1; i < n - k; i++)
	{
		if (m <= arr2[i + k] - arr2[i])
		{
			m = arr2[i + k] - arr2[i];
		}
	}
	printf("%lld", arr2[n - 1] - m);
	return 0;
}
