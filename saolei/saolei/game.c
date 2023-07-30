#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//��ʼ������
void initi(char mine[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for ( i = 0; i < rows; i++)
	{
		int j = 0;
		for ( j = 0; j < cols; j++)
		{
			mine[i][j] = set;
		}
	}

}

//��ʾ��
void print(char mine[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("********����С��Ϸ******\n");
	for ( i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for ( i = 1;  i <= row;  i++)
	{
		int j = 1;
		printf("%d ", i);
		for ( j = 1; j <= col; j++)
		{
			printf("%c ", mine[i][j]);
		}
		printf("\n");
	}
	printf("********����С��Ϸ******\n");
}

//������
void set(char mine[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		int x = 1 + rand() % 9;
		int y = 1 + rand() % 9;

		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//����Χ��
int calculate(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}

//����
void pailei(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 1;
	int y = 1;
	int win = 1;

	while (win <= ROW * COL - COUNT)
	{
		printf("�����������ų���λ�ã���");
		scanf("%d %d", &x, &y);
		if(x>=1 && x<=9 && y>=1 &&y<=9)
		{
			if (mine[x][y] == '1')
			{
				printf("�㱻ը���ˣ�\n");
				print(mine, ROW, COL);
				break;
			}
			else
			{
				int c = calculate(mine, x, y);
				show[x][y] = '0' + c;
				print(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("������������������ų���λ�ã���");
			scanf("%d %d", &x, &y);
		}
	}

	if (win == ROW * COL - COUNT + 1)
	{
		printf("���׳ɹ�!\n");
		print(mine, ROW, COL);
	}
}