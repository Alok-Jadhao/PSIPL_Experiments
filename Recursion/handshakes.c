#include <stdio.h>

int handshake(int n)
{
    if(n==2)
        return 1;
    else
        return handshake(n-1)+ (n-1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("The total number of handshakes are: %d", handshake(n));
}