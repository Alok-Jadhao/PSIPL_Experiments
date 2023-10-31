/*Write a menu driven C program where the  options are:
First - Copy one string to another string one by one character
Second - Find the str length
Third - Compare the given string whether they are equal or not (equal characters)
Fourth - Find the reverse of the string.
Fifth - Concatenate
Sixth - Convert the given string from lower case to upper case. */ 

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf("%[^\n]",str);

    int choice;

    printf("Enter a number (1-6): ");
    scanf("%d", &choice);
    getchar();

    int count = 0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }

    switch (choice) {
        case 1:
            //Switch case 1:
            {
                
                char string2[50];
                for(int i=0;i<count;i++)
                {   
                    string2[i] = str[i];
                }

                printf("The copied string is: ");
                for(int i=0;i<count;i++)
                {   
                    printf("%c",string2[i]);
                }
            
                break;
                }

        case 2:
            //Switch case 2:
            {
                
                printf("%d\n", count);
                break;
            }


        case 3:
        {
            int equal = 1; // Initialize to 1 (true) for equal
            char str2[50]; // Define a second string
            printf("Enter the second string: ");
            scanf(" %[^\n]", str2); // Input the second string
            int i, j;

            for (i = 0, j = 0; str[i] != '\0' && str2[j] != '\0'; i++, j++) {
                if (str[i] != str2[j])
                    equal = 0; // If characters are different, set equal to 0 (false)

                
            }
        

            if (equal) {
                printf("The strings are equal.\n");
            } 
            else {
                printf("The strings are not equal.\n");
            }
            break;
        }
            /*Switch case 3:
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
            */

        case 4:
            //switch case 4:
            {
                char string3[50];
                for(int i=count;i>0;i--)
                {   
                    string3[i] = str[count-i];
                }

                printf("The reversed string  is: ");
                for(int i=0;i<=count;i++){
                    printf("%c",string3[i]);
                }
                break;
            }


        case 5:
            {
                char conct[50], string4[50];
                scanf("%[^\n]",string4);

                
            
                int count2=0;
                for(int i=0;str[i]!='\0';i++)
                {
                    count2++;
                }
            

                for(int i=0;i<count;i++)
                {
                    printf("%c",str[i]);
                }
            
                for(int i=0;i<count2;i++)
                {
                    printf("%c",string4[i]);
                }
            break;
            }

        case 6:
            {


                for(int i=0;i<count;i++)
                {
                    printf("%c",toupper(str[i]));
                }
                break;
            }

        default:
            printf("Invalid choice.\n");
    }

     
    

    return 0;

}
