//����ģ��
#include "game.h"


void menu()
{
	printf("******************************\n");
	printf("****** 1.PALY    0.EXIT ******\n");
	printf("******************************\n");
}
//��Ϸ���㷨ʵ��
void game()
{
	int ret = 0;
	//����һ�����飬��¼���������߳���������Ϣ
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//���壬����Һ����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	   { printf("���Ӯ\n"); }
	else if (ret == '#') 
	   { printf("����Ӯ\n"); }
	else 
	   { printf("ƽ��\n"); }
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>1 OR 0\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}

	} while (input);
}

int main()
{
	test();
	return 0;
}