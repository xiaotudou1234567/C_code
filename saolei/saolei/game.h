#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROWS   11
#define COLS   11
#define ROW    9
#define COL    9
#define COUNT  8

//������ʼ����������
void initi(char mine[ROWS][COLS], int rows, int cols, char set);

//������ʾ����
void print(char mine[ROWS][COLS], int row, int col);

//����������
void set(char mine[ROWS][COLS], int row, int col, int count);

//��������
void pailei(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);