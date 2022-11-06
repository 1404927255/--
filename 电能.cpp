#include<iostream>
using namespace std;
int h[25], m[61], s[61], U[101], I[101];
int main()
{
    int n;
    cin >> n;
    int w = 0;
    char p;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i] >> p >> m[i] >> p >> s[i] >> U[i] >> I[i];
    }
    for (int i = 1; i < n; i++)
    {
        w += (((h[i + 1] - h[i]) * 3600) + ((m[i + 1] - m[i]) * 60) + (s[i + 1] - s[i])) * U[i] * I[i];
    }
    cout << w;
}
