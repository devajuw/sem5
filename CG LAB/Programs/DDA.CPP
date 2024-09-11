#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>

void drawline_dda(int x0, int y0, int x1, int y1) {
    int dx = x1 - x0;
    int dy = y1 - y0;
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
    double xIncrement = dx / (double)steps;
    double yIncrement = dy / (double)steps;
    double x = x0;
    double y = y0;

    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE);  // Use math.h's round()
        x += xIncrement;
        y += yIncrement;
    }
}

int main() {
    int x0, y0, x1, y1;

    // Input coordinates before entering graphics mode
    printf("Enter the value of x0, y0: ");
    scanf("%d %d", &x0, &y0);
    printf("Enter the value of x1, y1: ");
    scanf("%d %d", &x1, &y1);

   int height=GetSystemMetrics(SM_CYSCREEN);
    int width=GetSystemMetrics(SM_CXSCREEN);
    initwindow(width,height,"",-10,-10);

    drawline_dda(x0, y0, x1, y1);  

    getch();  
    closegraph();  
    return 0;
}
