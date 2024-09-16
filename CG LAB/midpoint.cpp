#include <graphics.h>
#include <stdio.h>

void drawCircle(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    
    while (y >= x)
    {
        // Plot the eight points
        putpixel(xc+x, yc+y, 1);
        putpixel(xc-x, yc+y, 2);
        putpixel(xc+x, yc-y, 3);
        putpixel(xc-x, yc-y, 4);
        putpixel(xc+y, yc+x, 5);
        putpixel(xc-y, yc+x, 6);
        putpixel(xc+y, yc-x, 7);
        putpixel(xc-y, yc-x, 8);
        
        x++;
        
        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
    }
}

int main()
{
     int height=GetSystemMetrics(SM_CYSCREEN);
    int width=GetSystemMetrics(SM_CXSCREEN);
    initwindow(width,height,"",-10,-10);
    int xc = 320, yc = 240, r = 200;
    drawCircle(xc, yc, r);
    getch();
    closegraph();
    return 0;
}