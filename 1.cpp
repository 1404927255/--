#include<iostream>
using namespace std;
int main(void)
{
	int n, m,sum;
	cin >> n >> m;
	sum = pow(n, m);
	if (sum > 100)
	{
		sum %= 1000;
		cout << sum;
	}
	else
		cout<<0<<endl;
}