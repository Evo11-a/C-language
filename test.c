#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"  

void menu()
{
		printf("**************************************");
		printf("********* 1.play   0.exit ************");
		printf("**************************************");
}
void game()
{
	char ret = 0;
	char board[Row][Col] = { 0 };
	InitBoard(board,Row,Col );
	DispalyBoard(board,Row,Col);
	while (1)
	{
		Playermove(board,Row,Col);
		DispalyBoard(board, Row, Col);
		ret=Iswin(board,Row,Col);
		if (ret != 'C')
		{
			break;
		}
		Computermove(board,Row,Col);
		DispalyBoard(board, Row, Col);
		ret=Iswin(board,Row,Col);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf(" 请输入:>");
		scanf_s("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
		
	} while (input);
}
int main()
{ 
	test();
    return 0;
}