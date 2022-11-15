#include<iostream>
#include<math.h>
using namespace std;

int test(int a)
{
	if (a == 2)
		return 1;
	else if (a < 2)
		return 0;
	for (int i = 2; i <= sqrt(1.0 * a); i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n, m;
	while (scanf_s("%d", &n)!=EOF)
	{
		int counter = 0;
		for (int i = 1; i <= n; i++)
		{
			scanf_s("%d", &m);
			if (test(m))
			{
				counter++;
			}
		}
		printf("%d\n", counter);
	}
	return 0;
}