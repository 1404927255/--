#include<iostream>
#include<algorithm>
using namespace std;
int arr[100005];
int n, m, r, counter = 0;
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + n);
    while (m--)
    {
        scanf("%d", &r);
        if (r < arr[0])
        {
            printf("-1\n");
        }
        else
        {
            int* tem = upper_bound(arr, arr + n, r) - 1;
            printf("%d\n", *tem);
        }
    }
}