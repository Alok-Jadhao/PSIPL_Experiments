#include <stdio.h>


int main() 
{
    // Open the input file
    FILE *inputFile = fopen("books.txt", "r");
    
    // Check if the file was opened successfully
    if (inputFile == NULL) 
    {
        // Handle the error
        printf("Error opening the file.\n");
        return 1;  
    }

    // Open the output files
    FILE *paperbackFile = fopen("paperback.txt", "w");
    FILE *hardbackFile = fopen("hardback.txt", "w");

    // Check if the files were opened successfully
    if (paperbackFile == NULL || hardbackFile == NULL) 
    {
        // Handle the error
        printf("Error opening the output files.\n");

        // Close the input file before returning
        fclose(inputFile);

        return 1;  // 
    }

    char bookType;
    char bookName[100];

    // Read records from the input file
    while (fscanf(inputFile, " %c %s", &bookType, bookName) == 2) {
        // Check the book type
        switch (bookType) {
            case 'p':
                fprintf(paperbackFile, "%s\n", bookName);
                break;

            case 'h':
                fprintf(hardbackFile, "%s\n", bookName);
                break;

            case 'b':
                // For 'b', add the name in both paperback and hardback files
                fprintf(paperbackFile, "%s\n", bookName);
                fprintf(hardbackFile, "%s\n", bookName);
                break;

            default:
                // Unknown book type
                printf("Unknown book type: %c\n", bookType);
        }
    }

    // Close all the files
    fclose(inputFile);
    fclose(paperbackFile);
    fclose(hardbackFile);

    return 0;  
}
