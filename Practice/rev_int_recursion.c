//Find the reverse of a number and return it from the function

#include<stdio.h>

void fun(int);

int main()
{
    printf("Enter the number: ");
    int num;
    scanf("%d",&num);
    fun(num);
    return 0;
}

void fun(int n){
    if(n<10){
        printf("%d",n);
        
    }
    else{
        printf("%d",n%10);
        fun(n/10);
    }

}