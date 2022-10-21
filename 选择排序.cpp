#include<stdio.h>
#define P 1010
int arr[P] = { 0 };
int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)//和冒泡同理
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = i + 1; j <= n  ; j++)//这里使j<=n，是为了让i和它后面所有数进行比较
		{
			if (arr[i] > arr[j])//如果i的大则和j换位置，将大数放在后面
			{
				int tem=arr[i];
				arr[i] = arr[j];
				arr[j] = tem;
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}