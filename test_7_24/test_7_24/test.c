#define _CRT_SECURE_NO_WARNINGS 1

/*����������
��Ŀ�ж����������ݣ�ÿһ����������a��b��c(0 < a, b, c < 1000)����Ϊ�����ε������ߣ��ÿո�ָ���
���������
���ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ��������������Equilateral triangle!���������������������Isosceles triangle!����
������������������Ordinary triangle!������֮�����Not a triangle!����*/

//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if (a + b > c && a + c > b && b + c > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (a == b || a == c || b == c)
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//				printf("Ordinary triangle!\n");
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}

////�žų˷���
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = i;
//		for (j = i; j <= 9; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////�������
////����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum = sum + (1.0/i);
//		}
//		else
//		{
//			sum = sum - (1.0/i);
//		}
//	}
//	printf("%lf", sum);
//	return 0;
//}

////��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int cont = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			++cont;
//		if (i / 10 == 9)
//			++cont;
//	}
//	printf("%d", cont);
//	return 0;
//}

////дһ�����룺��ӡ100~200֮�������
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 100;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 1;
//		int flag = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;
//			}
//
//		}
//		if (flag == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

#include <stdio.h>
#include <math.h>


//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//��ӡˮ�ɻ���
int main()
{
	int i = 100;
	for (i = 100; i <= 999; i++)
	{
		int a = i % 10;
		int b = (i / 10) % 10;
		int c = i / 100;
		if ((a*a*a + b*b*b + c*c*c) == i)
		{ 
			printf("ˮ�ɻ����ǣ�%d\n", i);
		}	
	}
	return 0;
}