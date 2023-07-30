#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void lun_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("%dÄêÊÇÈòÄê¡£", year);
	}
	else
	{
		return;
	}
}