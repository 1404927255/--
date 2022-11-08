#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int arr[100005];
long long n, m, r;
int main()
{
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    sort(arr, arr + n);
    scanf_s("%d", &m);
    while (m--)
    {
        scanf_s("%d", &r);
        if (r > arr[n - 1])
        {
            printf("%d\n", arr[n - 1]);
        }
        else if (r < arr[0])
        {
            printf("%d\n", arr[0]);
        }
        else
        {
            int* tem = lower_bound(arr, arr + n, r);
            int* sum = lower_bound(arr, arr + n, r) - 1;
            if (*tem == r)
            {
                printf("%d\n", *tem);
            }
            else if ((r - *sum) < (*tem - r))
            {
                printf("%d\n", *sum);
            }
            else if ((r - *sum) > (*tem - r))
            {
                printf("%d\n", *tem);
            }
            else if ((r - *sum) == (*tem - r))
            {
                printf("%d\n", *sum);
            }
        }
    }
}