#include<stdio.h>
void exchange(int* x, int* y)//接取地址需要使用类型+*，如果是整形地址就用int*去接取&的地址
{
	int sum;
	sum = *x;
	*x = *y;
	*y = sum;

}
int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	int* pa = &a;//*pa是指针变量，int是类型，*是解引用操作符
	int* pb = &b;//这个时候pa，pb用时要带*，才可以赋值
	printf("a=%d,b=%d\n", a, b);
	exchange(&a, &b);
	printf("a=%d,b=%d", a, b);

}
