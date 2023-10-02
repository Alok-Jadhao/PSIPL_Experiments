#include <stdio.h>
#include <math.h>

int main() {
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);

    if (no < 2) {
        printf("Special case: %d is neither prime nor composite.\n", no);
    } else {
        int isPrime = 1; // Assume the number is prime initially

        for (int i = 2; i <= sqrt(no); i++) {
            if (no % i == 0) {
                isPrime = 0; // Set the flag to indicate it's not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d is a prime number.\n", no);
        } else {
            printf("%d is not a prime number.\n", no);
        }
    }

    return 0;
}
