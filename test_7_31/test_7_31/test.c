#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/*дһ�����ֲ��Һ���
���ܣ���һ�����������в���ָ������ֵ���ҵ��˾ͷ����±꣬�Ҳ����ͷ���-1.*/
// arr �ǲ��ҵ�����
//left ��������±�
//right ��������±�
//key Ҫ���ҵ�����

int bin_search(int arr[], int left, int right, int key)
{
	int x = 0;

	while (left <= right)
	{
		x = (right + left) / 2;
		if (key == arr[x])
		{
			break;
		}
		else
		{
			if (key <= arr[x])
			{
				right = x - 1;
			}
			if (key >= arr[x])
			{
				left = x + 1;
			}
		}
	}

	if (left > right)
	{
		return -1;
	}
	else
	{
		return x;
	}
}

int main()
{
	int arr[10] = { 0, 2 , 3, 4, 5, 6, 7, 8, 9, 10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key =1;
	int xiabiao = 0;

	xiabiao = bin_search( arr, left, right, key);

	printf("%d", xiabiao);

	return 0;
}