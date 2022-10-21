#include<stdio.h>
#define P 1010
int arr[P] = { 0 };
int main()
{
	int n;
	scanf_s("%d", &n);//n表示个数
	for (int i = 1; i <= n; i++)//使用循环接收所有数
	{
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < n - 1; i++)//i表示比较次数
	{
		for (int j = 0; j < n - i - 1 ; j++)//控制数组中对比数的下标
		{
			if (arr[j] > arr[j + 1])//依次两两比较如 1-2比，2-3比，3-4比，谁大谁放后面
			{
				int tem=arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
	for (int i = 1; i <= n; i++)//到这里时，arr里面数已经排列好，依次将他们打出即可
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}