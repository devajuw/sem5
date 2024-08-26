#include <graphics.h>
#include <math.h>


int main() {
     int height=GetSystemMetrics(SM_CYSCREEN);
    int width=GetSystemMetrics(SM_CXSCREEN);
    initwindow(width,height,"",-10,-10);
    int r = 100, i, x, y;
    float rad_angle;

    line(500, 0, 1000, 0);
    line(500, 0, 0, 1000);

    for (i = 0; i <= 90; i += 6) {
        cleardevice();

        rad_angle = (3.14 * i) / 180;
        x = r * cos(rad_angle);
        y = r * sin(rad_angle);
        line(0, 0, x, y);
        delay(100);
    }

    getch();

    return 0;
}