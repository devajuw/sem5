#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main()
{
    int height = GetSystemMetrics(SM_CYSCREEN);
    int width = GetSystemMetrics(SM_CXSCREEN);
    initwindow(width, height, "", -8, -8);
 setbkcolor(12);
    cleardevice();
    outtextxy(570, 670, "ELLIPSE");
    ellipse(500, 500, 0, 360, 560, 265);
    outtextxy(30, 10, "ABCD");
    ellipse(540, 540, 0, 200, 530, 245);
    outtextxy(400, 300,"ARC");
    arc(300, 300, 0, 180, 25);
    outtextxy(190, 120,"FILLED ELLIPSE");
    fillellipse(150, 150, 75, 25);
    setcolor(4);
    outtextxy(330, 200, "CIRCLE");
    circle(260, 200, 50);
   
 
    int c;
    c = getbkcolor();
    printf("%d", c);
    getch();
    closegraph();
    return 0;
}