#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (size_t i = 1; i < 101; i++)
//	{
//		if (0 == i % 3)
//		{
//			printf("%d,", i);
//		}
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	while (scanf("%d %d %d", &num1, &num2, &num3) != EOF)
	{
		if (num1 >= num2 && num2 >= num3)
		{
			printf("%d %d %d\n", num1, num2, num3);
		}
		else if (num1 >= num3 && num3 >= num2)
		{
			printf("%d %d %d\n", num1, num3, num2);
		}
		else if (num3 >= num2 && num2 >= num1)
		{
			printf("%d %d %d\n", num3, num2, num1);
		}
		else if (num3 >= num1 && num1 >= num2)
		{
			printf("%d %d %d\n", num3, num1, num2);
		}
		else if (num2 >= num3 && num3 >= num1)
		{
			printf("%d %d %d\n", num2, num3, num1);
		}
		else if (num2 >= num1 && num1 >= num3)
		{
			printf("%d %d %d\n", num2, num1, num3);
		}
	}
	return 0;
}