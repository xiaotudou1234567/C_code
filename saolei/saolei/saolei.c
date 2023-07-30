#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menue()
{
	printf("************************\n");
	printf("*********1.play*********\n");
	printf("*********0.exit*********\n");
	printf("************************\n");

}

void game()
{

	//定义两个数组
	char mine[ROWS][COLS] = { '0' };
	char show[ROWS][COLS] = { '*' };

	//初始化两个数组
	initi(mine, ROWS, COLS, '0');
	initi(show, ROWS, COLS, '*');


	//显示雷
	//print(mine, ROW, COL);
	print(show, ROW, COL);


	//安放雷
	set(mine, ROW, COL, COUNT);
	//print(mine, ROW, COL);

	//排查雷
	pailei(mine, show, ROW, COL);
}

int main()
{
	int input = 1;
	srand((unsigned int)time(NULL));
	
	do
	{
		menue();
		printf("请选择：》");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;

		case 0:
			break;

		default:
			printf("输入错误，请重新输入");
			break;
		}
	} while (input);


	return 0;
}