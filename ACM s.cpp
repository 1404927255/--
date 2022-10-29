#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,m,i,j;
	char a[1010];
	scanf_s("%d", &n);
	getchar();
	while (n--)
	{
		int tem = 0;
		gets_s(a);
		m = strlen(a);
		for (i = 0; i < m; i++)
		{
			if (a[i] < 0)
			{
				tem++;
			}
		}
		printf("%d\n", tem / 2);
		
	}
}