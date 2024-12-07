// print current system date
#include <stdio.h>
#include <time.h>

int main() {
    // Declare a time_t variable to store the current time
    time_t current_time;
    
    // Get the current time
    time(&current_time);
    
    // Convert it to local time
    struct tm *local_time = localtime(&current_time);

    // Print the current date
    printf("Current Date: %02d-%02d-%04d\n", 
           local_time->tm_mday, 
           local_time->tm_mon + 1,  // Months are 0-11, so add 1
           local_time->tm_year + 1900); // Years since 1900

    return 0;
}

