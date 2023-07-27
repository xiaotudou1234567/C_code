#define _CRT_SECURE_NO_WARNINGS 1

/*输入描述：
题目有多组输入数据，每一行输入三个a，b，c(0 < a, b, c < 1000)，作为三角形的三个边，用空格分隔。
输出描述：
针对每组输入数据，输出占一行，如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，
其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。*/

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

////九九乘法表
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

////分数求和
////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
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

////编写程序数一下 1到 100 的所有整数中出现多少个数字9
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

////写一个代码：打印100~200之间的素数
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


//打印水仙花数
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
			printf("水仙花数是：%d\n", i);
		}	
	}
	return 0;
}