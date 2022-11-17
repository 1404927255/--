#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int a[1000001];
int main()
{
    int cnt = 1,n;
    memset(a, 0, sizeof(a));
    for (int i = 2; i < 1000001; i++)
    {
        if (a[i] == 0)
        {
            a[i] = cnt;
            for (int k = 2 * i; k < 1000001; k = k + i)
            {
                a[k] = cnt;
            }
            cnt++;
        }
    }
    while (scanf("%d", &n) != EOF)
    {
        printf("%d\n", a[n]);
    }
    return 0;
}