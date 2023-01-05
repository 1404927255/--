#include<iostream>
#include<string>
using namespace std;
int main()
{
	char a[266];
	gets_s(a);
	int b=0, c=0,flag=1;
	for (int i = 0; a[i]!='@' && i < sizeof(a); i++)
	{
		if (a[i]=='(')
		{
			b++;
			flag ++;
		}
		if (a[i] == ')')
		{
			c++;
			flag --;
		}
		if (flag == 0)
		{
			break;
		}
	}
	if (b == c&&flag==1)
	{
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
	return 0;
}