////给定两个整数a和b (0 < a,b < 10,000)，计算a除以b的整数商和余数。
//
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d %d", a / b, a % b);
//	return 0;
// }

////据说智商140以上者称为天才，KiKi想知道他自己是不是天才，请帮他编程判断。
////输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	if (a >= 140)
//	{
//		printf("Genius");
//	}
//	return 0;
//}

////题目有多组输入数据，每一行输入两个整数（范围-231~231-1），用空格分隔。
//
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//	while(scanf_s("%d %d", &a, &b) != EOF)
//	{
//		if (a == b)
//		{
//			printf("%d=%d\n", a, b);
//		}
//		if (a > b)
//		{
//			printf("%d>%d\n", a, b);
//		}
//		if (a < b)
//		{
//			printf("%d<%d\n", a, b);
//		}
//	}
//	return 0;
//}

////输入描述：
////输入包括一个整数M（1≤M≤100, 000）。
////输出描述：
////输出包括一行，如果M可以被5整除就输出YES，否则输出NO（结果大小写敏感）。
//#include <stdio.h>
//int main()
//{
//	int M;
//	scanf_s("%d", &M);
//	if (M % 5 ==0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}

//输入描述：
//多组输入，一个整数（1~100），表示线段长度，即“ * ”的数量。
//输出描述：
//针对每行输入，输出占一行，用“ * ”组成的对应长度的线段。

#include <stdio.h>
int main()
{
	int num;
	while (scanf_s("%d", &num) != EOF)
	{
		for (size_t i = 0; i < num; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}