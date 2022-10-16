#include<stdio.h>
int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//给定一个有序整数数组，个数可以自己定
	int a;
	int sz = sizeof(arr) / sizeof(0);//sizeof计算这个数据的大小，arr/0就是整个数组的大小除以其中一个，就是这个数组的个数
	int leaft, right, mid;//这里设定左下标和右下标，以及中间下标
	leaft = 0;
	right = sz - 1;
	printf("请输入1-10的数字\n");
	scanf_s("%d", &a);
	while (leaft <= right)
	{
		mid = (leaft + right) / 2;
		if (arr[mid] < a)//arr[mid]就是mid这个下标值在整个数组中对应的数字
		{
			leaft = mid + 1;
		}
		else if (arr[mid] > a)//和a进行比较，小的话左值变为mid+1，相反同理
		{
			right = mid - 1;
		}
		else
		{
			printf("这个数的下标是%d", mid);
			break;
		}
	}
	if (leaft > right)
	{
		printf("好像没有这个数字\n");
	}
}
