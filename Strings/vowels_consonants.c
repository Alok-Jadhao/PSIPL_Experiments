#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter the string: ");
    scanf("%[^\n]", str);
    
    int words = 0, vowels = 0, consonants = 0;
    
    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }

        // Check if the character is a space or null terminator, indicating a word boundary
        if (ch == ' ' || ch == '\0') {
            words++;
        }

        // Check if the character is a letter (non-space) and not a vowel
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
                consonants++;
            }
        }

        
    }
    words++;

    printf("Vowels: %d\n", vowels);
    printf("Words: %d\n", words);
    printf("Consonants: %d\n", consonants);

    return 0;
}
