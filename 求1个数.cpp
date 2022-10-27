#include <stdio.h>
int main() {
    int i, n, a, tem;
    while (scanf_s("%d", &n) == 1)
    {
        tem = 0;
        for (i = 1; i <= n; ++i)
        {
            a = i;
            while (a)
            {
                if (a % 10 == 1)
                    ++tem;
                a /= 10;
            }
        }
        printf("%d", tem);
    }
    return 0;
}