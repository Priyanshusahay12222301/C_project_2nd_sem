#include <stdio.h>
#include <unistd.h> // For sleep()

// Define signal durations (in seconds)
#define RED_DURATION 5
#define YELLOW_DURATION 2
#define GREEN_DURATION 5

// Function prototypes
void showSignal(const char *color, int duration);
void trafficCycle();

int main() {
    printf("--- Traffic Signal System ---\n");
    printf("Simulating traffic lights...\n");

    while (1) {
        trafficCycle(); // Run traffic light cycle indefinitely
    }

    return 0;
}

// Function to display the signal and wait for the given duration
void showSignal(const char *color, int duration) {
    printf("Signal: %s\n", color);
    for (int i = duration; i > 0; i--) {
        printf("%d seconds remaining...\n", i);
        sleep(1);
    }
}

// Function to handle the traffic light cycle
void trafficCycle() {
    // Red signal
    showSignal("RED", RED_DURATION);

    // Green signal
    showSignal("GREEN", GREEN_DURATION);

    // Yellow signal
    showSignal("YELLOW", YELLOW_DURATION);
}
