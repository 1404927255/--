#include<iostream>
#include<vector>
using namespace std;

int main()
{
	
	int n;
	cin >> n;
	while (n--)
	{
		int m;
		cin >> m;
		vector<int> a;
		for (int i = 1; i <= m; i++)
		{
			if (i % 2 == 0)
			{
				a.push_back(i);
			}
		}
		while (a.size() > 3)
		{
			for (int i = 0; i <= m; i += 2)
			{
				a[i] = 0;
			}
			if()
		}
	}
}