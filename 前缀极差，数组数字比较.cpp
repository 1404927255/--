#include<stdio.h>
int max[100000] = { 0 }, min[100000] = { 0 };//题目范围0-100000
int arr[100000] = { 0 };//定义后里面是/0/0/0/0/0/0/0/0/0/0
int main()//                           0 1 2 3 4 5 6 7 8 9
{
	int a = 0, b = 0, k = 0;
	int i, j;
	scanf_s("%d %d", &a, &b);//a代表整数个数，b代表第几个问题
	for (i = 1; i <= a; i++)//这个for用来接收询问的整数
	{
		{
			scanf_s("%d", &arr[i]);//i=1输入后，就是arr[1]，下标就是1
		}
		if (i == 1)//如果只有一个数字的话，极差就是它自己减自己
		{
			max[i] = arr[i];//所以赋值时最大最小都是它
			min[i] = arr[i];
		}
		else//如果不是那么就对数组内的所有数字进行比较
		{
			max[i] = (max[i - 1] > arr[i]) ? (max[i - 1]) : (arr[i]);//数组内的整数比较可以用双目操作法也可以用循环
			min[i] = (min[i - 1] < arr[i]) ? (min[i - 1]) : (arr[i]);
		}
	}
	for (j = 1; j <= b; j++)//这个for用来计算前几个数之间的极差，如果j>i，则j比i多的部分在arr中找到对应下标的数为0
	{
		scanf_s("%d", &k);
		printf("%d ", max[k] - min[k]);//j>i，找到的max[j]和min[j]都为0

	}
	return 0;
}