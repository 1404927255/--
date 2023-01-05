#include<iostream>
#include<vector>
using namespace std;

struct student//结构体更方便
{
	int l, r, del = 0;
}stu[100001];

int main()
{
	int n,m;
	cin >> n;
	stu[1].l = 0;//类似于牵手排队
	stu[1].r = 0;//没有起始点，设置一个虚假的0和1牵手
	for (int i = 2; i <= n; i++)
	{
		int x, y;
		cin >> x >> y;
		if (y )
		{
			stu[i].l = x;//新进来的在他右边，所以新进来这个人的左边救就是X
			stu[i].r = stu[x].r;//新进来的右手就是原来那个人右手牵的人
			stu[stu[x].r].l = i;//原来那个人右手的那个人的左手牵的就是新来的
			stu[x].r = i;//
			
		}
		else
		{
			stu[i].r = x;//和上同理
			stu[i].l = stu[x].l;
			stu[stu[x].l].r = i;
			stu[x].l = i;

		}
	}
	cin >> m;
	while (m--)
	{
		int a;
		cin >> a;
		stu[a].del = 1;
	}//                              e为真就进行循环
	for (int e = stu[0].r; e; e = stu[e].r)//从0的起始位开始输出，一直输出右手位置
	{//                                                        牵手就可以一直往右输出，最后回到0
		if(!stu[e].del)
		cout << e << ' ';
	}
	return 0;
}