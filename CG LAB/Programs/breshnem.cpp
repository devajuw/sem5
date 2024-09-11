#include <graphics.h>
#include <conio.h>

int main()
{
    int height=GetSystemMetrics(SM_CYSCREEN);
    int width=GetSystemMetrics(SM_CXSCREEN);
    initwindow(width,height,"",-10,-10);
    int x0 = 304, y0 = 100, x1 = 670, y1 = 149, p0, p;
    int dx = x1 - x0;
    int dy = y1 - y0;
    p0 = 2 * dy - dx;
    int x = x0;
    int y = y0;

    while (x <= x1)
    {
        putpixel(x, y, RED);
        
        if (p0 <= 0)
        {
            x = x + 1;
            p0 = p0 + 2 * dy;
        }
        else
        {
            x = x + 1;
            y = y + 1;
            p0 = p0 + 2 * dy - 2 * dx;
        }
        
        delay(10); 
    }

    getch();
    closegraph();
    return 0;
}
