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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf(" ������:>");
		scanf_s("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
		
	} while (input);
}
int main()
{ 
	test();
    return 0;
}