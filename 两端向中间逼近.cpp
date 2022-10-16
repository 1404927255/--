#include<stdio.h>
#include<string.h>
#include<Windows.h>//这个函数库用来调用sleep，即间隔多少毫秒后在进行下次操作
int main()
{
	char arr1[] = "i love you";//字符串后还会有一个\0，下标个数应该是元素个数-2
	char arr2[] = "??????????";
	int leaft = 0;
	int right = strlen(arr2) - 1;//strlen使用后直接省略\0
	while (leaft <= right)
	{
		arr2[leaft] = arr1[leaft];//即arr1和arr2相互替换
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(100);
		leaft++;
		right--;
	}
	return 0;
}
