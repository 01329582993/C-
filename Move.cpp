#include <graphics.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include "Head.h"




int gotoxy(int x,int y){
COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    return 0;
}
