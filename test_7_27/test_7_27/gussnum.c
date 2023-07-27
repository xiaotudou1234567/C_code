#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void game()
{
	int r = (1 + rand()%100); //初始化1-100的随机值
	int g = 0;
	int count = 8;

	while (1)
	{
		printf("您还有%d次机会。\n", count);
		printf("请输入你的猜测值（1-100）：");
		scanf("%d", &g);
		if (g < r)
		{
			printf("猜小了！\n");
			count--;
		}
		else if (g > r)
		{
			printf("猜大了！\n");
			count--;
		}
		else
		{
			printf("猜对了!\n");
			break;
		}

		if (count == 0)
		{
			printf("次数用尽！\n");
			break;
		}
	}

}


void menu()
{
	printf("**************************\n");
	printf("******** 1.play game *****\n");
	printf("******** 0.exit      *****\n");
	printf("**************************\n");
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入有误请重新输入！\n");
			break;
		}
	} while (input);

	return 0;
}