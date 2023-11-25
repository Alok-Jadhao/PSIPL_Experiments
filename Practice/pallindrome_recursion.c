//Check whether a string is a palindrome or not.

#include<stdio.h>
#include<string.h>

int pallin(char word[],int start,int end);

int main(){
    char word[50];
    int start,end;
    start=0;
    scanf("%s",word);
    end = strlen(word)-1;
    if(pallin(word,start,end))
        printf("The word is a pallindrome.\n");
    else
        printf("The word is not a pallindrome.\n");
    return 0;
}

int pallin(char word[],int start,int end){
    //Base case
    if(start>=end) return 1;

    if(word[start]!=word[end])
        return 0;
    else
        return pallin(word,start+1,end-1);
    
}