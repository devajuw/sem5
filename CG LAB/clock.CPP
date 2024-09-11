#include <graphics.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <windows.h>  // For GetSystemMetrics()

// Function to draw the clock hands
void drawHand(int centerX, int centerY, int length, float angle, int color) {
    int x = centerX + length * cos(angle);  // X-coordinate based on angle
    int y = centerY - length * sin(angle);  // Y-coordinate based on angle (inverted for BGI)
    setcolor(color);  // Set the color for the hand
    line(centerX, centerY, x, y);  // Draw the hand from the center
}

int main() {
    // Get screen dimensions
    int height = GetSystemMetrics(SM_CYSCREEN);
    int width = GetSystemMetrics(SM_CXSCREEN);

    // Initialize a full-screen window
    initwindow(width, height, "", -10, -10);

    // Calculate center of the screen (coordinate origin for the clock)
    int centerX = width / 2;
    int centerY = height / 2;
    int radius = 200;  // Radius of the clock

    while (1) {
        // Get the current time
        time_t now = time(0);
        struct tm *current_time = localtime(&now);

        int hour = current_time->tm_hour % 12;  // 12-hour format
        int minute = current_time->tm_min;
        int second = current_time->tm_sec;

        // Convert time to angles (in radians)
        float second_angle = (M_PI / 30) * second;  // 6 degrees per second
        float minute_angle = (M_PI / 30) * (minute + second / 60.0);  // 6 degrees per minute
        float hour_angle = (M_PI / 6) * (hour + minute / 60.0);  // 30 degrees per hour

        // Clear the screen
        cleardevice();

        // Draw the clock face (circle)
        setcolor(WHITE);
        circle(centerX, centerY, radius);

        // Draw the clock hands
        drawHand(centerX, centerY, radius - 20, second_angle, RED);      // Second hand (red)
        drawHand(centerX, centerY, radius - 40, minute_angle, GREEN);    // Minute hand (green)
        drawHand(centerX, centerY, radius - 60, hour_angle, BLUE);       // Hour hand (blue)

        // Draw clock markings (for hours)
        setcolor(WHITE);
        for (int i = 0; i < 12; i++) {
            float mark_angle = (M_PI / 6) * i;  // 30 degrees per hour mark
            int mark_x = centerX + (radius - 10) * cos(mark_angle);
            int mark_y = centerY - (radius - 10) * sin(mark_angle);
            circle(mark_x, mark_y, 3);  // Draw a small circle for each hour mark
        }

        delay(1000);  // Delay 1 second before refreshing (real-time update)
    }

    getch();  // Wait for a key press before closing
    closegraph();  // Close the graphics window

    return 0;
}
