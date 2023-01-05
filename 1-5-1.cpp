#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int b[200005];
int main()
{
	vector<int> a;
	int n,max=0,flag=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int m,p;
		cin >> m;
		if (m == 0)
		{
			cin >> p;
			a.push_back(p);
			if (p > max)
				max = p;

		}
		else if (m == 1)
		{
			if (a.back() == max)
			{
				flag = 1;
				max = 0;
			}
			a.pop_back();
		}
		else if (m == 2)
		{
			if (a.empty())
				cout << "0" << endl;
			else if (flag)
			{
				for (int j = 0; j < a.size(); j++)
				{
					if (max < a[j])
						max = a[j];
				}
				flag = 0;
				cout << max << endl;
			}
			else
				cout << max << endl;
		}
	}
}