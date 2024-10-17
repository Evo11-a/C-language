#define Row 3
#define Col 3
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char  board[Row][Col], int row, int col); 
void DispalyBoard(char board[Row][Col], int row, int col); 
void Playermove(char board[Row][Col], int row, int col);
void Computermove(char board[Row][Col], int row, int col);
char Iswin(char board[Row][Col],int row,int col);
