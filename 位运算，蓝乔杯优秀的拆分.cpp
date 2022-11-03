#include<iostream>
using namespace std;
int main(void)
{
    int a;
    cin >> a;
    if (a % 2 == 1 || a == 0)
        cout << "-1" << endl;
    else
    {
        for (int i = 29; i >= 0; i--)
        {
            if (a >> i & 1)
            {
                printf("%d ", 1 << i);
            }
        }
    }
}