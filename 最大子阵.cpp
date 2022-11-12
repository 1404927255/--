#include<iostream>
#include<time.h>
using namespace std;
int arr[51][51], b[101][101];
int main()
{
    int max = -2134567198;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
            b[i][j] = arr[i][j] + b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k <= n; k++)
        {
            for (int j = 1; j <= m; j++)
            {
                for (int p = j; p <= m; p++)
                {
                    int tem = b[k][p] - b[k][j - 1] - b[i - 1][p] + b[i - 1][j - 1];
                    if (tem > max)
                    {
                        max = tem;
                    }
                }
            }
        }
    }
    cout << max << endl;
 

}