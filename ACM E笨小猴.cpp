#include<stdio.h>
#include<string.h>
int test(int n)
{
	if (n < 2)return 0;
	for (int i = 2; i <= floor(sqrt(n)); i++)
	{
		if (n % i == 0)return 0;
	}
	return 1;
}
char a[1001];
int b[1001];
int main()
{
	freopen("word.in", "r", stdin);
	freopen("word.out", "w", stdout);
	int i = 0;
	scanf_s("%s", a);
	for (i = 0; i < strlen(a); i++)
		b[a[i] - 'a'] += 1;
	int max = -100, min = 100;
	for (i = 0; i < 26; i++)
	{
		if (max < b[i] && b[i] != 0)
			max = b[i];
		if (min > b[i] && b[i] != 0)
			min = b[i];
	}
	if (test(max - min))
		printf("Lucky Word\n%d", (max - min));
	else
		printf("No Answer\n0");
	return 0;
}
