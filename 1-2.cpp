#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

char a[65][65];
int main()
{
	int n;
	scanf_s("%d",&n);
	getchar();
	for (int i = 1; i <= n; i++)
	{
		gets_s(a[i]);

	}
	int b, c,counter=0,tem=0;
	scanf_s("%d,%d", &b,&c);
	int site=b-1;
	while (counter != n)
	{
		site++;
		if (site > n)
		{
			site = 1;
		}
		if (strcmp(a[site],"1")!=0)
		{
			tem++;
		}
		if (tem == c)
		{
			tem = 0;
			counter++;
			cout << a[site] << endl;
			strcpy_s(a[site], "1");
		}
	}
	return 0;
}