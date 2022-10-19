#include<stdio.h>
#include<assert.h>
int test1(int n)
{
	int i;
	int sum = 1;
	for (i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum ;
}
int test2(int m)
{
	int j;
	int sum1 = 1;
	int h = 0;
	for (j = 1; j <= m; j++)
	{
		sum1 *= j;
		h += sum1;
	}
	return h;
}
long fact(int x)
{
	if (x < 0)
		return -1;
	else if (x == 0 || x == 1)
		return 1;
	else
		return x * fact(x - 1);
}
int main(void) 
{
	int a, b,c,d;
	printf("输入一个数，计算阶乘和阶乘之和，以及n!=n*(n-1)...1\n");
	scanf_s("%d", &a);
	b = test2(a);
	c = test1(a);
	d = fact(a);
	printf("!%d=%d\n",a, c);
	printf("阶乘之和=%d\n", b);
	printf("%a!=%d", a, d);
	return 0;
}
