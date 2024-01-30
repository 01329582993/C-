#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "Head.h"

int radius = 5;
int x = 150, y = 150;

int main() {
    char ch;
    initwindow(1200, 600);



    int gd = DETECT, gm;
    arena();
    gotoxy(x, y);
    setcolor(YELLOW);
    circle(x, y, radius);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(350, 550, "WELCOM TO CHOPER GAME !");
    outtextxy(1105, 150, "SCOOR:_");


    while (1) {
        ch = getch();
        switch (ch) {
        case 75:
            while(!kbhit()){
             if(x<120 || y<115 || x>=989 || y>385){
                setfillstyle(SOLID_FILL, GREEN);
                fillellipse(x, y, radius, radius);
                setcolor(GREEN);
                circle(x,y,radius);
                x=120;
                y=120;
                }
            setfillstyle(SOLID_FILL, GREEN);
            fillellipse(x, y,radius, radius);
            setcolor(GREEN);
            circle(x,y,radius);
            x -= 10;
            gotoxy(x, y);
            setcolor(YELLOW);
            circle(x, y, radius);
            delay(100);
            }
            break;
        case 77:
            while(!kbhit()){
                if(x<120 || y<115 || x>=989 || y>385){
                setfillstyle(SOLID_FILL, GREEN);
                fillellipse(x, y, radius, radius);
                setcolor(GREEN);
                circle(x,y,radius);
                x=120;
                y=120;
                }
            setfillstyle(SOLID_FILL, GREEN);
            fillellipse(x, y, radius, radius);
            setcolor(GREEN);
            circle(x,y,radius);
            x += 10;
            gotoxy(x, y);
            setcolor(YELLOW);
            circle(x, y, radius);
            delay(100);
            }
            break;
        case 72:
            while(!kbhit()){
                if(x<120 || y<115 || x>=989 || y>385){
                setfillstyle(SOLID_FILL, GREEN);
                fillellipse(x, y, radius, radius);
                setcolor(GREEN);
                circle(x,y,radius);
                x=120;
                y=120;
                }
            setfillstyle(SOLID_FILL, GREEN);
            fillellipse(x, y, radius, radius);
            setcolor(GREEN);
            circle(x,y,radius);
            y -= 10;
            gotoxy(x, y);
            setcolor(YELLOW);
            circle(x, y, radius);
            delay(100);
            }
            break;
        case 80:
            while(!kbhit()){
                if(x<120 || y<115 || x>=989 || y>385){
                setfillstyle(SOLID_FILL, GREEN);
                fillellipse(x, y, radius, radius);
                setcolor(GREEN);
                circle(x,y,radius);
                x=120;
                y=120;
                }
            setfillstyle(SOLID_FILL, GREEN);
            fillellipse(x, y, radius, radius);
            setcolor(GREEN);
            circle(x,y,radius);
            y += 10;
            gotoxy(x, y);
            setcolor(YELLOW);
            circle(x, y, radius);
            delay(100);
            }
            break;
        case 27:
            exit(0);
            break;
        }
        gotoxy(x, y);
        setcolor(YELLOW);
        circle(x, y, radius);

    }


    getch();
    closegraph();
    return 0;
}
