#include<iostream>
#include<queue>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, m, k, cj, cs, count = 0;//n是任务的个数，m是目标任务的位置，cj是负责比较的首任务，cs是当前手任务的顺序位置
		queue<int> a, b, dui;//a队列放任务的重要程度，dui放任务的顺序，a和b一样，b负责遍历找最大值操作
		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			cin >> k;
			a.push(k);//重要程度放入a
			dui.push(i);//顺序放入dui
		}
		while (1)//负责将输出操作与判断隔开
		{
			b = a;
			int flag = 1;//判断这个任务是输出还是放置最后
			while (!b.empty())//b不空返回0
			{
				cj = b.front();
				if (cj > a.front())//如果b中有重要程度比首位置大的，那么就把首位置放后面
				{
					a.push(a.front());
					a.pop();
					dui.push(dui.front());//顺序也要放
					dui.pop();
					flag = 0;//仅当首元素是最大时才能为真
					break;//此时flag是0，跳出这个循环，也不能进行解决操作
				}
				b.pop();//遍历全部队列后，发现首元素是最大，那么就判断是不是目标值

			}
			if (flag)
			{
				cs = dui.front();
				if (cs == m)//是目标值就跳出循环，输出时间即可
					break;
				else//不是目标值，就把它解决，并加上解决时间，返回重新遍历
				{
					a.pop();
					dui.pop();
					count++;
				}
			}
		}
		cout << ++count << endl;
	}
	return 0;

}