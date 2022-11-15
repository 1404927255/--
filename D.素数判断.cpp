#include<iostream>
using namespace std;

int test(int a)
{
	int tem = 0;
	tem = a * a + a + 41;
	return tem;
}

int test2(int a)
{
	if (a < 2)
		return 0;
	else if (a == 2)
		return 1;
	for (int i = 2; i <= floor(sqrt(a)); i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int n, m;
	while(scanf_s("%d %d", &n, &m)!=EOF)
	{
		int tem = 0;
	if (n>m|| n == m)
		exit(0);
	for (int i = n; i <= m; i++)
	{
		if (!test2(test(i)))
		{
			tem = 1;
			break;
		}
	}
	if (tem == 1)
	{
		printf("Sorry\n");
	}
	else
		printf("OK\n");
	}
	return 0;
}
