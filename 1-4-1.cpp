#include<iostream>
#include<stack>
#include<queue>
#include<string.h>
using namespace std;
char ch[10];    //定义一个字符数组存push和pop
int q[1000];    //存栈内元素
int p[1000];    //存队列内元素
int main()
{
    int m, n;
    int x, flag;     //x为入栈数字，flag为标记，用来标记是否为空栈或空队列
    scanf("%d", &m);
    getchar();
    while (m--)
    {
        flag = 0;         //标记初始化
        int c = 0, d = 0;    //c和d为计数器，分别为队列和栈的计数
        queue<int> a;   //定义一个队列
        stack<int> b;   //定义一个栈
        scanf("%d", &n);
        getchar();
        while (n--)
        {
            scanf("%s", ch);
            if (ch[1] == 'u')      //看是push还是pop，如果第二个字符为‘u‘就入栈
            {
                scanf("%d", &x);
                a.push(x);      //入队列
                b.push(x);      //入栈
            }
            else
            {
                if (a.empty() || b.empty())    //判断是否为空栈（空队列）如果为空栈还pop就输出error
                {
                    flag = 1;
                }
                else                        //否则就pop
                {
                    a.pop();
                    b.pop();
                }
            }
        }
        if (flag != 1)     //如果不是空栈或空队列
        {
            while (!a.empty())   //非空就那一个数组存起来
            {
                p[d] = a.front();
                a.pop();
                d++;
            }
            for (int i = 0; i < d; i++)    //输出队列元素
            {
                if (i != d - 1)
                {
                    printf("%d ", p[i]);
                }
                else
                {
                    printf("%d\n", p[i]);
                }
            }
            while (!b.empty())   //非空就拿一个数组存起来
            {
                q[c] = b.top();
                b.pop();
                c++;
            }
            for (int i = c - 1; i >= 0; i--)     //输出队列元素，因为栈是先进后出，所以倒序输出
            {
                if (i != 0)
                {
                    printf("%d ", q[i]);
                }
                else
                {
                    printf("%d\n", q[i]);
                }
            }
        }
        else
        {
            printf("error\n");
            printf("error\n");
        }
        while (!a.empty() || !b.empty())   //清空队列和栈内元素
        {
            a.pop();
            b.pop();
        }
    }
    return 0;
}
