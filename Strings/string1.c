#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    printf("Enter the string: ");
    scanf("%[^\n]",str);
    printf("%s",str);
    return 0;
}