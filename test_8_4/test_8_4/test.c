#define _CRT_SECURE_NO_WARNINGS 1

/*�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
���磺
���룺5  �����5
���룺10�� �����55
���룺2�� �����1*/

//�ݹ�

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

////�ǵݹ�
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

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

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

/*дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
���룺1729�������19*/
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

/*�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩*/

//�ݹ�

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

//�ǵݹ�

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

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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