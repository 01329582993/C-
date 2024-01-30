#include <graphics.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include "Head.h"

void arena(){
    setbkcolor(2);
    cleardevice();
    int x2=1000,y2=400;
    setcolor(RED);
    while(x2<1200 && y2<500){
    rectangle(100,100,x2,y2);
    x2+=2;
    y2+=2;
    }
    int x1=100,y1=100;
    while(x1>20 && y1>20){
    rectangle(x1,y1,1100,500);
    x1-=2;
    y1-=2;
    }

 }
