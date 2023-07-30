#define _CRT_SECURE_NO_WARNINGS 1
#include "arr.h"

void init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int temp = 0;

	while (left <= right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}

}

void dayin(int row)
{
	int i = 0;
	for ( i = 1;  i <= row;  i++)
	{
		int j = i;
		for (j = i; j <= row; j++)
		{
			printf("%d*%d=%-3d", i, j, i * j);
		}
		printf("\n");
	}
}