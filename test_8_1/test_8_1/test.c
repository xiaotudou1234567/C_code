#define _CRT_SECURE_NO_WARNINGS 1

/*����Խ��*/

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

/*����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���*/
#include <stdio.h>

int main()
{
	int money = 20;
	int sum = 0;
	int rest = 0;

	while (money != 0)
	{
		sum += money / 1;
		rest = rest + money % 2;
		money = money / 2 + rest / 2;
		if (rest / 2 != 0)
		{
			rest = 0;
		}
	}

	printf("%d", sum);
}

//#include <stdio.h>
//int main()
//{
//	char arr[13][13] = { '*' };
//	int i = 0;
//	int j = 0;
//	int num = 5;
//	
//	for ( i = 0; i < 7; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 13; j++)
//		{
//			if (num < j && j < 12 - num)
//			{
//				arr[i][j] = '*';
//				printf("%c ", arr[i][j]);
//			}
//			else
//			{
//				arr[i][j] = '0';
//				printf("  ");
//			}
//		}
//		printf("\n");
//		if (num < 0)
//		{
//			num = 5;
//		}
//		num--;
//	}
//
//	for (i = 7; i < 13; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 13; j++)
//		{
//			arr[i][j] = arr[12-i][j];
//			if (arr[i][j] == '*')
//			{
//				printf("%c ", arr[i][j]);
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

///*���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//��:153��1^3��5^3��3^3����153��һ����ˮ�ɻ�����*/
//
//#include <stdio.h>
//#include <math.h>
//
//float pd(int i)
//{
//	float n = 1;
//	while (1)
//	{
//		int a = (int)pow(10, n);
//		if (i / a == 0)
//		{
//			return n;
//			break;
//		}
//		else
//		{
//			n++;
//		}
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int x = 0;
//	int sum = 0;
//
//	for ( i = 1; i < 100000; i++)
//	{
//		n = (int)pd(i);
//		//printf("%d", i)153;
//		int num = i;
//		int sum = 0;
//		while (n)
//		{
//			int a = num / (int)pow(10, n - 1);
//			x = (int)pow(a, 3);
//			sum = sum + x;
//			num = num % (int)pow(10, n - 1);
//			n--;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

/*��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

���磺2+22+222+2222+22222*/

//#include <stdio.h>
//#include <math.h>
//
//int he(a, i)
//{
//	int sum = 0;
//	while (i)
//	{
//		sum = sum + a * (int)pow(10,i-1);
//		i--;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a = 2;
//	int i = 5;
//
//	int sum = he(a, i);
//	sum = 0;
//	//printf("%d", sum);
//
//	for (i = 1; i <= 5; i++)
//	{
//		sum += he(a, i);
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}