
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////打印空心方块
//int main()
//{
//	int m = 0;
//	int i = 0;
//	int j = 0;
//
//	while (scanf("%d", &m) != EOF)
//	{
//		for ( i = 0; i < m; i++)
//		{
//			int j = 0;
//			for ( j = 0; j < m; j++)
//			{
//				if (i != 0 && i != (m - 1) && j != 0 && j != (m-1))
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//针对每行输入，输出用“*”组成的X形图案。
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int i = 0;
//	int j = 0;
//
//	while (scanf("%d", &m) != EOF)
//	{
//		for ( i = 0; i < m; i++)
//		{
//			int j = 0;
//			for ( j = 0; j < m; j++)
//			{
//				if (j == i || j == (m-1-i))
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

/*一行，输入10个整数（范围 - 231~231 - 1），用空格分隔。
输出描述：
一行，逆序输出输入的10个整数，用空格分隔*/

//#include <stdio.h>
//
//void shuru(int arr[], int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//
//void dayin(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = 9;
//	int temp = 0;
//
//	shuru(arr, sz);
//
//	while (left<=right)
//	{
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//
//	dayin(arr, sz);
//	return 0;
//}

//#include <stdio.h>
//
//void shuru(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//
//void dayin(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int arr1[m];
//	int arr2[n];
//	int arr3[(m+n)];
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//
//	shuru(arr1, m);
//	shuru(arr2, n);
//
//	for ( i = 0; i < m; i++)
//	{
//		arr3[i] = arr1[i];
//	}
//
//	for (i = m; i < (m+n); i++)
//	{
//		arr3[i] = arr2[i-m];
//	}
//
//	for (i = 0; i < (m+n); i++)
//	{
//		int j = 0;
//		for (j= i+1; j < (m+n); j++)
//		{
//			if(arr3[i] > arr3[j])
//			{
//				temp = arr3[i];
//				arr3[i] = arr3[j];
//				arr3[j] = temp;
//			}
//		}
//	}
//
//	dayin(arr3, (m + n));
//	return 0;
//}

/*实现一个函数is_prime，判断一个数是不是素数。
利用上面实现的is_prime函数，打印100到200之间的素数。*/

#include <stdio.h>

void is_prime(int m, int n)
{
	int i = 0;
	int j = 0;

	for ( i = m; i <= n; i++)
	{
		int flag = 1;
		for ( j = 2; j <= i-1; j++)
		{
			if(i%j == 0)
			{
				flag = 0;
				break;
			}
		}

		if (flag == 1)
		{
			printf("%d ", i);
		}
	}
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);

	is_prime(m, n);
	return 0;
}