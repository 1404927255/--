#include<iostream>
using namespace std;
int main(void)
{
	int n, coin=1,sum=0;
	cin >> n;
	while (n > 0)
	{
		int tem = 0;
		tem = (n > coin) ? (coin*coin) : (n * coin);
		sum += tem;
		n -= coin;
		coin++;
	}
	cout << sum << endl;
}