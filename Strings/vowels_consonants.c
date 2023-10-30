#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf("%s[^\n]",str);
    int words,vowels,consonants;

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
            vowels++;
        
        else if(str[i]==' ' && str[i]=='\0')
            words++;
        
        else
            consonants++;


    }

    printf("Vowels: %d\n",vowels);
    printf("Words: %d\n",words);
    printf("Consonants: %d\n",consonants);

    return 0;
}
