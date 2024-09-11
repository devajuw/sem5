#include <stdio.h>
#include <time.h>

int main() {
    // Fetch current system time
    time_t current_time;
    struct tm *time_info;

    // Get the current time in seconds since the epoch
    current_time = time(NULL);

    // Convert the current time to local time (hours, minutes, seconds)
    time_info = localtime(&current_time);

    // Display the current time (HH:MM:SS)
    printf("Current Time: %02d:%02d:%02d\n", time_info->tm_hour, time_info->tm_min, time_info->tm_sec);

    return 0;
}
