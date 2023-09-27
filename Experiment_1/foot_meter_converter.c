#include <stdio.h>

int main() {
    float foot, meter;

    //foot= 0.3048 m

    scanf("%f",&foot);
    meter = foot*(0.3048);
    printf("%.3f", meter);

    return 0;
}