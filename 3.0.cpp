#include<iostream>
#include<algorithm>
using namespace std;
int arr[100005];
int n, m, r, counter = 0;
int main()
{
    scanf_s("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    sort(arr, arr + n);
    while (m--)
    {
        scanf_s("%d", &r);
        int leaft = lower_bound(arr, arr + n, r) - arr;
        int right = upper_bound(arr, arr + n, r) - arr;
        printf("%d\n %d\n", right, leaft);

    }
}