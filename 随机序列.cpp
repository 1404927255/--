#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int n;
	scanf_s("%d", &n);
	while (n--)
	{
		int arr[1010];
		int m;
		scanf_s("%d", &m);
		int max = 0, min = 5000;
		double sum = 0;
		for (int i = 1; i <= m; i++)
		{
			scanf_s("%d", &arr[i]);
			sum += arr[i];
			if (arr[i] > max)
				max = arr[i];
			if (arr[i] < min)
				min = arr[i];
		}
		double ave = sum / m;
		double tem = 0;
		for (int j = 1; j <= m; j++)
		{
			tem += (arr[j] - ave) * (arr[j] - ave);
		}
		printf("%d %.3f", max - min, tem / m);
	}
}