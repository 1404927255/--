#include<iostream>
#include<string.h>
using namespace std;
int arr[10001];
int main()
{
    int n, m, counter = 0;
    cin >> n >> m;
    memset(arr, 0, sizeof(arr));
    while (m--)
    {
        int x, y;
        int j = 0;
        cin >> x >> y;
        for (j = x; j <= y; j++)
        {
            arr[j] = 1;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == 0)
            counter++;
    }
    cout << counter;
}