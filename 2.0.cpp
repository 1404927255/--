#include<iostream>
#include<algorithm>
using namespace std;
int arr[100001];
int main()
{
    int n, m, r, mid = 0;
    scanf_s("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d ", &arr[i]);
    }
    sort(arr, arr + n);
    while (m--)
    {
        scanf_s("%d", &r);
        int leaft = 0, right = n - 1;
        while (leaft <= right)
        {
            mid = leaft + (right - leaft) / 2;
            if (arr[mid] < r)
            {
                leaft = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        if (arr[leaft] >= r)
            printf("%d\n", arr[leaft]);
        else
            printf("-1\n");
    }
}