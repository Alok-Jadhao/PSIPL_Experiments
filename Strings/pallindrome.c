#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%[^\n]",str);

    int l=0;
    int h= strlen(str)-1;

    while(h>l)
    {
        if(str[l++]!= str[h--])
        {
            printf("The word is not a Pallindrome.");        
            return 0;
        }
    }

    
        printf("The word is a pallindrome.");

    return 0;
    
}