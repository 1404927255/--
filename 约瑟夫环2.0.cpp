#include<iostream>

using namespace std;

int arr[101];//初始为0 表示人都在

int main()
{
	int n, k, m;//人数，初始位，目标数
	cin >> n >> k >> m;
	int site = k, tem = 0, cout = 0;//报数site    tem报的数值  cout 滚出去的人数
	while (cout != n - 1)//没有只剩一个人
	{
		++site;//初始位置报数了
		if (site > n)//大于人数了  重新开始报数
			site = 1;
		if (!arr[site])//这个位置有人  那就爆出来  +1
			tem++;
		if (tem == m)//等于目标值了  滚出去
		{
			arr[site] = 1;//这个位置就没人了
			tem = 0;//报数归零，重新报
			cout++;//滚出去的人数加1   就是剩下人数-1
		}
	}
	for (int i = 1; i <= n; i++)//遍历整个数组，找到仅有的那个0，就是最后一个人
	{
		if (!arr[i])
			cout << i - 1;//因为报数从一开始报数，数组从0 开始，减去1
	}
}