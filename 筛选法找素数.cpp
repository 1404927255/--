#include<stdio.h>
#include<assert.h>
int test(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		assert(n);
		if (n % i == 0)
			return 1;
	}
}
int main(void)
{
	int a,i,j;
	printf("请输入一个数字，找出1到它之间所有素数\n");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++)
	{
		if (test(i) != 1)
		{
			printf("%d ", i);
		}
	}
	return 0;

}