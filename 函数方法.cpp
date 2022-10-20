#include<stdio.h>
#include<string.h>
#define N -1
int test1(int arr[], int a, int sz)//数组本身是一个指针，这里接受应该是一个地址
{
	int leaft, right, mid;//声明
	leaft = 0;//坐下标
	right = sz;//问题：右下标，但是如果-1，下标不对，且给1，无法运行
	while (leaft <= right)//2分法使用的话至少要满足左下标小于右下标
	{
		mid = (leaft + right) / 2;//中间值的下标
		if (arr[mid] > a)//判断中间值和你想要的那个数的位置关系，在中间值左边的话，使右下标变为mid-1
		{
			right = mid - 1;
		}
		else if (arr[mid] < a)//在中间值右边的话，使左下标变为mid+1。  注意判断条件，是中间值大于或小于所要数，所以中间值的那个下标一定不是
		{
			leaft = mid + 1;
		}
		else
			return mid;//因为是自定义函数，最后返回应该是想要的那个值，mid
	}
	if (leaft > right)//可以不要
		return N;
}

int main(void)
{
	int a,ret,p;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//            0 1 2 3 4 5 6 7 8 9
	int sz = strlen("arr") ;//求出数组里的个数，10的话，右下标应该是sz-1
	printf("输入1-10里的数字：");
	scanf_s("%d", &a);
	ret = scanf_s("%d", &a);
	while (ret != 1)//这个判断输入的是否为字符，如果是则取走，并打印39
	{
		while (getchar() != '\n');
		printf("请重新输入\n");
		ret = scanf_s("%d", &a);
	}
	p = test1(arr, ret, sz);
	if (p != N)
		printf("这个数的下标是%d\n", p);
	else
		printf("没有这个数");
	return 0;
}
