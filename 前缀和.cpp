#include<stdio.h>
#define P 100000
int arr1[P] = { 0 }, arr2[P] = { 0 };
int main()
{
	int n, k, l, r;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= P - 10; i++)//先把所有数全部算出，最后选择范围进行加减即可
	{

		if (i % k == 0)
		{
			arr1[i] = 1;
		}
		arr2[i] = arr1[i] + arr2[i - 1];//前缀和，2[1]=1[1]+2[0],2[2]=1[2]+2[1]->2[2]=1[1]+1[2]
	}
	while (n--)//循环的次数
	{
		scanf("%d %d", &l, &r);
		printf("%d\n", arr2[r] - arr2[l]);//2[r]=1+2+3+.+l.+..+r.2[l]=1+2+3+...+l->2[r]-2[l]=l到r的所有数
	}
	return 0;
}
