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

	//������������
	char mine[ROWS][COLS] = { '0' };
	char show[ROWS][COLS] = { '*' };

	//��ʼ����������
	initi(mine, ROWS, COLS, '0');
	initi(show, ROWS, COLS, '*');


	//��ʾ��
	//print(mine, ROW, COL);
	print(show, ROW, COL);


	//������
	set(mine, ROW, COL, COUNT);
	//print(mine, ROW, COL);

	//�Ų���
	pailei(mine, show, ROW, COL);
}

int main()
{
	int input = 1;
	srand((unsigned int)time(NULL));
	
	do
	{
		menue();
		printf("��ѡ�񣺡�");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;

		case 0:
			break;

		default:
			printf("�����������������");
			break;
		}
	} while (input);


	return 0;
}