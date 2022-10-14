#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int magic, guess, ret;
	int counter = 0;
	char input;
	srand(time(NULL));//time()这里指生成的随机数随时间的变化也跟着变化，需要用到time.h
	magic = rand() % 100 + 1;//%100是对100取余数，即小于100，还是它本身，100的话就是0，所以后面加1，范围就是1-100
	do//因为是先猜数后判断正确，所以do-while的结构更合适
	{
		printf("猜一猜这个数字是什么\n");
		scanf_s("%d", &guess);
		counter++;//这里表示的是猜数的次数
		ret = guess;
		if (ret == 1)//！=1即在这里判断输入的字符是不是%d即是不是数字，是的话为真就是1，不是的话就是假为0
		{
			while (getchar() != '\n')//getchar表示接收到的字符，清除在缓存区的不正确字符
				printf("请重新输入一个数字！\n");
			ret = scanf_s("%d", &guess);//使ret等于输入值重新进行判断
		}
		else
			if (guess > magic)
				printf("猜错了，你个sb，太大了\n");
			else if (guess < magic)
				printf("猜错了，你个sb，太小了\n");
			else
				printf("恭喜你猜对了");
	} while (guess != magic && counter <= 10);//选择循环的条件，即猜数次数小于等于10，且猜的数和给的数不同
	if (counter > 10)
	{
		printf("你输了！\n");
		printf("需要下一次机会吗？\ny(yes) or n(no)?\n");
		;
		printf("你没机会了（doge）");
	}
	return 0;
}
