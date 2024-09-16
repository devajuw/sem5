#include <graphics.h>
#include <stdio.h>

void floodFill4(int x, int y, int newColor, int oldColor);

int main() {
    int height = GetSystemMetrics(SM_CYSCREEN);
    int width = GetSystemMetrics(SM_CXSCREEN);

    initwindow(width, height, "", -10, -10);

    setcolor(RED);
    rectangle(100, 100, 300, 300);
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(101, 101, RED);

    floodFill4(150, 150, YELLOW, BLUE);

    getch();
    closegraph();

    return 0;
}

void floodFill4(int x, int y, int newColor, int oldColor) {
    if (getpixel(x, y) == oldColor) {
        putpixel(x, y, newColor);

        floodFill4(x + 1, y, newColor, oldColor);
        floodFill4(x - 1, y, newColor, oldColor);
        floodFill4(x, y + 1, newColor, oldColor);
        floodFill4(x, y - 1, newColor, oldColor);
    }
}