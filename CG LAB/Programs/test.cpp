#include <graphics.h>
int main()
 {
    int height=GetSystemMetrics(SM_CYSCREEN);
    int width=GetSystemMetrics(SM_CXSCREEN);
    initwindow(width,height,"",-10,-10);
    circle(200,200,100);
    getch();
    closegraph();
 }