#include <stdio.h>
#include <time.h>

int main() {
    struct timespec ts;
    
    if (clock_gettime(CLOCK_REALTIME, &ts) == 0) {
        printf("Current time: %ld seconds, %ld nanoseconds\n", ts.tv_sec, ts.tv_nsec);
    } else {
        perror("clock_gettime");
        return 1;
    }
    
    if (clock_gettime(CLOCK_MONOTONIC, &ts) == 0) {
         printf("Monotonic time: %ld seconds, %ld nanoseconds\n", ts.tv_sec, ts.tv_nsec);
    } else {
        perror("clock_gettime");
        return 1;
    }
    return 0;
}