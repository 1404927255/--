#include<iostream>
#include<math.h>
using namespace std;

int test(int a)
{
	if (a < 2)
		return 0;
	for (int i = 2; i <= floor(sqrt(a)); i++)
	{
		if (a % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int n = 0;
	int counter = 0;
	while (scanf_s("%d", &n) != EOF)
	{
		if (n % 2 == 1 || n == 0)
			exit(0);
		for (int i = 2; i < n / 2; i++)
		{
			if (test(i) == 1 && test(n - i) == 1)
			{
				counter++;
			}
		}
		printf("%d\n", counter);
		counter = 0;
	}
	return 0;
}