#include<iostream>
#include<algorithm>
using namespace std;
int arr[1000050];
int n, m, r, counter = 0;
int main()
{
    scanf_s("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    sort(arr, arr + m);
    while (n--)
    {
        scanf_s("%d", &r);

        bool p;
        p = binary_search(arr, arr + m, r);
        if (p == true)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}