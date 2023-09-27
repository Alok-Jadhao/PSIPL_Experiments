#include <stdio.h>

int main(){
    int a,b;
    printf("Enter a and b: ");
    scanf("%d %d", &a,&b);
    int sum= a+b;
    printf ("%d\n",sum);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%f\n",(float)a/b);
    printf("a %% b=%d\n",a%b);



    return 0;
}