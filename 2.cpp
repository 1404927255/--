#include<iostream>
using namespace std;
int a[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
int b[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
int test(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}
	else
		return 0;
}
int main(void)
{
	int year, month, day;
	cin >> year >> month >> day;
	int tem, sum=0;
	tem = test(year);
	if (tem == 1)
	{
		for (int i = 1; i < month; i++)
		{
			sum += a[i];
		}
		cout << sum + day;
	}
	else
	{
		for (int i = 1; i < month; i++)
		{
			sum += b[i];
		}
		cout << sum + day;
	}
}