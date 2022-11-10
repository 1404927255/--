#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
char arr[100001];
int test(int right)
{
    for (int i = 1; i <= right / 2; i++)
    {
        if (arr[i] != arr[right - i + 1])
        {
            return 1;
        }
        else
            return 0;
    }
}
void test2(int right)
{
    if (right % 2 != 0)
    {
        printf("%d", right);
        exit(0);
    }
    else
    {
        int tem = test(right);
        if (tem == 1)
        {
            printf("%d", right);
            exit(0);
        }
        test2(right / 2);
    }
}
int main(void)
{
    scanf_s("%s", arr + 1);
    int right = strlen(arr + 1);
    test2(right);
}