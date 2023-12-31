#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    int words = 0, vowels = 0, consonants = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowels++;
        else if (str[i] == ' ')
            words++;
        else
            consonants++;
    }

    // To account for the last word in the input string
    words++;

    printf("Vowels: %d\n", vowels);
    printf("Words: %d\n", words);
    printf("Consonants: %d\n", consonants);

    return 0;
}
