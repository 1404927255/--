#include<iostream>
#include<queue>
#include<vector>

using namespace std;
int main()
{
    vector<int> a[10001];//vector 是一个动态容器，即它本身就是一个数组->vector<vector<int> > a 就是a[][]
    int n, m, x, y;//    vector<int> a[10001]就是在a数组的每一个位置都是一个动态容器
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        a[x].push_back(y);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}