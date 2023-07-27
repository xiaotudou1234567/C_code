#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>


///* 将一个数组中自定义输入的十个数排序 */
//
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int change = 0;
//
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		int j = i + 1;
//		for (j = i+1; j < 10; j++)
//		{
//			if (arr[i] <= arr[j])
//			{
//				change = arr[i];
//				arr[i] = arr[j];
//				arr[j] = change;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

/*两边数字往里面缩进*/
//#include <string.h>

//int main()
//{
//	char cc[] = "I love caiyiqing";
//	char xx[] = "****************";
//	int left = 0;
//	int right = strlen(cc)-1;
//	printf("%s\n", xx);
//	Sleep(1000);
//
//	while( left <= right)
//	{ 		
//		xx[left] = cc[left];
//		xx[right] = cc[right];
//		left++;
//		right--;
//		system("cls");
//		printf("%s\n", xx);
//		Sleep(1000);
//	}
//
//	return 0;
//}

/*编写一个程序，从用户输入中读取10个整数并存储在一个数组中。然后，计算并输出这些整数的平均值。*/

//int main()
//{
//	int num[10] = { 0 };
//	int i = 0;
//	int sum = 0;
//	int sz = sizeof(num) / sizeof(num[0]);
//
//
//	for ( i = 0; i < 10; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		sum += num[i];
//	}
//
//	printf("%d", sum / sz);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &m, &n);
//
//	int arr1[n][m];
//	int arr2[m][n];
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//
//	for (j = 0; j < m; j++)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			arr2[j][i] = arr1[i][j];
//		}
//	}
//
//	for (j = 0; j < m; j++)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ", arr2[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

///*将数组A中的内容和数组B中的内容进行交换。（数组一样大）*/
//#include <stdio.h>
//
//int main()
//{
//	int a[5] = {1, 2, 3, 4, 5};
//	int b[5] = {4, 5, 6, 7, 8};
//	int sz = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	int change = 0;
//
//	printf("a:");
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//
//
//	printf("b:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//
//
//	for ( i = 0; i < sz; i++)
//	{
//		change = b[i];
//		b[i] = a[i];
//		a[i] = change;
//	}
//
//	printf("a:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//
//
//	printf("b:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//
//
//	return 0;
//}

/*给定两个数，求这两个数的最大公约数

例如：

输入：20 40

输出：20*/
//
//#include <stdio.h>
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int arr[2] = { 0 };
//	int i = 0;
//
//	if (m <= n)
//	{
//		arr[0] = m;
//		arr[1] = n;
//	}
//	else
//	{
//		arr[0] = n;
//		arr[1] = m;
//	}
//
//	for (i = arr[0]; i >= 1; i--)
//	{
//		if ( arr[0] % i  == 0 && arr[1] % i == 0)
//		{
//			printf("%d", i);
//			break;
//		}
//	}
//
//	return 0;
//}

/*打印闰年*/
#include <stdio.h>
int main()
{
	int i = 1000;
	int j = 2000;

	for (i = 1000; i<=2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
		{
			printf("%d ", i);
		}
		else if (i % 400 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
