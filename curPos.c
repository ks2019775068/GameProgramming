#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y); //java �ñ״�ó�� ����? 
int main(void)
{
	gotoxy(2,4);
	printf("Hello");
	gotoxy(40, 20);
	printf("Hello");
	return 0;
}
//window.h ���Ͽ� �� �ڵ��� ������ �������. 
void gotoxy(int x, int y)
{
	COORD Pos = {x - 1, y - 1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

//Ŀ�� ��ġ ����
#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y);
int main(void)
{
	for(int i=1;i<=9;i++)
		{
			gotoxy(35, 5+i);
			printf("%d*%d=%2d",3,i,3*i);
		}
	printf("\n");
	return 0;
}
//3�� ���

