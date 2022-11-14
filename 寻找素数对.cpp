#include<iostream>
using namespace std;

int test(int a)
{
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n = 0;
	while (scanf_s("%d", &n) != EOF)
	{
		if (n < 5 || n % 2 == 1)
			exit(0);
		int p, q;
		q = p = n / 2;
		while (test(p) == 0 || test(q) == 0)
		{
			q--;
			p++;
		}
		printf("%d %d\n", q, p);
	}
	return 0;
}