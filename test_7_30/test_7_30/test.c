#define _CRT_SECURE_NO_WARNINGS 1

/*����һ���������飬��ɶ�����Ĳ���

ʵ�ֺ���init() ��ʼ������Ϊȫ0
ʵ��print()  ��ӡ�����ÿ��Ԫ��
ʵ��reverse()  �����������Ԫ�ص����á�*/

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

/*ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��

�磺����9�����9*9�ھ������12�����12*12�ĳ˷��ھ���*/

int main()
{
	int row = 0;

	scanf("%d", &row);
	dayin(row);

	return 0;
}