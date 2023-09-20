#pragma once
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//函数的声明
void InitBoard(char board[ROW][COL], int row, int col);      //形参不用在意大小写或者字符，甚至row和col改为a b也行
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);



//告诉我们四种游戏状态
//玩家赢    '*'
//电脑赢    '#'
//平局      'Q'
//继续游戏  'C'

char IsWin(char board[ROW][COL], int row, int col);