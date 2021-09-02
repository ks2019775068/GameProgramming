#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y); //java 시그니처와 연관? 
int main(void)
{
	gotoxy(2,4);
	printf("Hello");
	gotoxy(40, 20);
	printf("Hello");
	return 0;
}
//window.h 파일에 밑 코드의 정보가 들어있음. 
void gotoxy(int x, int y)
{
	COORD Pos = {x - 1, y - 1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

//커서 위치 제어
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
//3단 출력

