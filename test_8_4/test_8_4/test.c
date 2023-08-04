#define _CRT_SECURE_NO_WARNINGS 1

/*递归和非递归分别实现求第n个斐波那契数
例如：
输入：5  输出：5
输入：10， 输出：55
输入：2， 输出：1*/

//递归

//#include <stdio.h>
//
//int fb(int n)
//{
//	if (n > 2)
//	{
//		return fb(n - 1) + fb(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fb(n);
//	printf("%d", ret);
//	return 0;
//}

////非递归
//#include <stdio.h>
//
//int main()
//{
//	int n = 1;
//
//	while(scanf("%d", &n) !=EOF)
//	{ 
//		int a = 1;
//		int b = 1;
//		int c = 1;
//		while ( n > 2 )
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//
//		printf("%d\n", c);
//	}
//	return 0;
//}

//编写一个函数实现n的k次方，使用递归实现。

//#include <stdio.h>
//
//int pow(int n1, int k)
//{
//	if (k == 1)
//	{
//		return n1;
//	}
//	else
//	{
//		return n1 * pow(n1, k - 1);
//	}
//}
//
//int main()
//{
//	int n1 = 0;
//	int k = 0;
//	scanf("%d %d", &n1, &k);
//	int n2 = pow(n1, k);
//	printf("%d", n2);
//
//	return 0;
//}

/*写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
输入：1729，输出：19*/
//#include <stdio.h>
//
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return (n % 10) + DigitSum(n / 10);
//	}
//	else
//	{
//		return (n % 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//}

/*递归和非递归分别实现求n的阶乘（不考虑溢出的问题）*/

//递归

//#include <stdio.h>
//
//int jc(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * jc(n - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", jc(n));
//
//	return 0;
//}

//非递归

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int jc = 1;
//	scanf("%d", &n);
//
//	for (i = 1; i <=n; i++)
//	{
//		jc = jc * i;
//	}
//
//	printf("%d", jc);
//}

//递归方式实现打印一个整数的每一位
#include <stdio.h>

void print(int n)
{
	if (n / 10 != 0)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);

	return 0;
}