////������������a��b (0 < a,b < 10,000)������a����b�������̺�������
//
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d %d", a / b, a % b);
//	return 0;
// }

////��˵����140�����߳�Ϊ��ţ�KiKi��֪�����Լ��ǲ�����ţ����������жϡ�
////����һ��������ʾһ���˵����̣�������ڵ���140�����������һ����ţ������Genius����
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	if (a >= 140)
//	{
//		printf("Genius");
//	}
//	return 0;
//}

////��Ŀ�ж����������ݣ�ÿһ������������������Χ-231~231-1�����ÿո�ָ���
//
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int b;
//	while(scanf_s("%d %d", &a, &b) != EOF)
//	{
//		if (a == b)
//		{
//			printf("%d=%d\n", a, b);
//		}
//		if (a > b)
//		{
//			printf("%d>%d\n", a, b);
//		}
//		if (a < b)
//		{
//			printf("%d<%d\n", a, b);
//		}
//	}
//	return 0;
//}

////����������
////�������һ������M��1��M��100, 000����
////���������
////�������һ�У����M���Ա�5���������YES���������NO�������Сд���У���
//#include <stdio.h>
//int main()
//{
//	int M;
//	scanf_s("%d", &M);
//	if (M % 5 ==0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}

//����������
//�������룬һ��������1~100������ʾ�߶γ��ȣ����� * ����������
//���������
//���ÿ�����룬���ռһ�У��á� * ����ɵĶ�Ӧ���ȵ��߶Ρ�

#include <stdio.h>
int main()
{
	int num;
	while (scanf_s("%d", &num) != EOF)
	{
		for (size_t i = 0; i < num; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}