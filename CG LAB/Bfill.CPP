#include <graphics.h>
#include <stdio.h>
#include <windows.h>

void boundaryFill4(int x, int y, int fill, int boundary);

int main()
{
    int height = GetSystemMetrics(SM_CYSCREEN);
    int width = GetSystemMetrics(SM_CXSCREEN);

    initwindow(width, height, "", -10, -10);

    setcolor(RED);
    rectangle(100, 100, 300, 300);

    boundaryFill4(150, 150, YELLOW, RED);

    getch();
    closegraph();

    return 0;
}

void boundaryFill4(int x, int y, int fill, int boundary)
{
    int current = getpixel(x, y);

    if ((current != boundary) && (current != fill))
    {
        putpixel(x, y, fill);

        boundaryFill4(x + 1, y, fill, boundary);
        boundaryFill4(x - 1, y, fill, boundary);
        boundaryFill4(x, y + 1, fill, boundary);
        boundaryFill4(x, y - 1, fill, boundary);
    }
}