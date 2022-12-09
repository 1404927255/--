#include<iostream>
using namespace std;
int arr[1002];
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cin >> arr[0];
        if (arr[0] == 15)
            cout << "DOWN";
        else if (arr[0] == 0)
            cout << "UP";
        else
            cout << "-1";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        if (arr[n] == 15)
            cout << "DOWN";
        if (arr[n] == 0)
            cout << "UP";
        if (arr[n] > arr[n - 1] && arr[n] != 15)
            cout << "UP";
        if (arr[n] < arr[n - 1] && arr[n] != 0)
            cout << "DOWN";

    }

}