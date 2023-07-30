#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROWS   11
#define COLS   11
#define ROW    9
#define COL    9
#define COUNT  8

//声明初始化二雷数组
void initi(char mine[ROWS][COLS], int rows, int cols, char set);

//声明显示数组
void print(char mine[ROWS][COLS], int row, int col);

//声明设置雷
void set(char mine[ROWS][COLS], int row, int col, int count);

//声明排雷
void pailei(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);