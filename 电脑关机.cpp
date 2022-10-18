#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] ;//定义这个数组时，不要放置内容，如果防止内容会使后面strcmp无法比较
	system("shutdown -s -t 60");
	printf("你的电脑将会在60秒后关机\n如果不想关机就输入：我是猪\n");
	scanf_s("%s", &input ,10);
	if(strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}

	return 0;
}
