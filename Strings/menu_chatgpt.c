#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    int choice;

    printf("Enter a number (1, 2, 3, 4, 5, or 6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Copy one string to another string
            {
                char string2[50];
                strcpy(string2, str); // Using strcpy to copy one string to another
                printf("The copied string is: %s\n", string2);
            }
            break;

        case 2: // Find the string length
            {
                int count = 0;
                for (int i = 0; str[i] != '\0'; i++) {
                    count++;
                }
                printf("String length: %d\n", count);
            }
            break;

        case 3: // Compare the given string
            {
                char compareStr[50];
                printf("Enter a string for comparison: ");
                scanf(" %[^\n]", compareStr);
                if (strcmp(str, compareStr) == 0) {
                    printf("The strings are equal.\n");
                } else {
                    printf("The strings are not equal.\n");
                }
            }
            break;

        case 4: // Find the reverse of the string
            {
                int length = strlen(str);
                char reverseStr[50];
                for (int i = 0; i < length; i++) {
                    reverseStr[i] = str[length - i - 1];
                }
                reverseStr[length] = '\0';
                printf("Reversed string: %s\n", reverseStr);
            }
            break;

        case 5: // Concatenate
            {
                char concatStr[100];
                char secondStr[50];
                printf("Enter a second string: ");
                scanf(" %[^\n]", secondStr);
                strcpy(concatStr, str);
                strcat(concatStr, secondStr);
                printf("Concatenated string: %s\n", concatStr);
            }
            break;

        case 6: // Convert the given string from lower case to upper case
            {
                int length = strlen(str);
                for (int i = 0; i < length; i++) {
                    if (str[i] >= 'a' && str[i] <= 'z') {
                        str[i] = str[i] - 'a' + 'A'; // Convert to uppercase
                    }
                }
                printf("Uppercase string: %s\n", str);
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
