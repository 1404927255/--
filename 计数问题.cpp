#include<iostream>

using namespace std;

int main()
{
	int n,q,cout=0;
	scanf_s("%d %d", &n,&q);
	for (int i = n; i >= 1; i--)
	{
		int m = i;
		while (m != 0)
		{
			if (m % 10 == q)
				cout++;
				m /= 10;
		}
	}
	printf("%d", cout);
}