#include <stdio.h>

int main(){
    float cel, faren;
    printf("Enter temperature in Celcius: ");
    scanf("%f", &cel);
    faren = (cel * 1.8)+32;
    printf("The Temperature in farenheit is %.2f\n", faren);


    printf("Enter temperature in Faren: ");
    scanf("%f", &faren);
    cel= (faren -32) / (1.8);
    printf ("%f",cel);

    return 0;
}