#define _CRT_SECURE_NO_WARNINGS 1

/*创建一个整形数组，完成对数组的操作

实现函数init() 初始化数组为全0
实现print()  打印数组的每个元素
实现reverse()  函数完成数组元素的逆置。*/

#include "arr.h"

//int main()
//{
//	int arr[10] = { 1, 2, 3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//
//	return 0;
//}

/*实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定

如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。*/

int main()
{
	int row = 0;

	scanf("%d", &row);
	dayin(row);

	return 0;
}