#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void game()
{
	int r = (1 + rand()%100); //��ʼ��1-100�����ֵ
	int g = 0;
	int count = 8;

	while (1)
	{
		printf("������%d�λ��ᡣ\n", count);
		printf("��������Ĳ²�ֵ��1-100����");
		scanf("%d", &g);
		if (g < r)
		{
			printf("��С�ˣ�\n");
			count--;
		}
		else if (g > r)
		{
			printf("�´��ˣ�\n");
			count--;
		}
		else
		{
			printf("�¶���!\n");
			break;
		}

		if (count == 0)
		{
			printf("�����þ���\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�����������������룡\n");
			break;
		}
	} while (input);

	return 0;
}