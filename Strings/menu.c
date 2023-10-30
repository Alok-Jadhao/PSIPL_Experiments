/*Write a menu driven C program where the  options are:
First - Copy one string to another string one by one character
Second - Find the str length
Third - Compare the given string whether they are equal or not (equal characters)
Fourth - Find the reverse of the string.
Fifth - Concatenate
Sixth - Convert the given string from lower case to upper case. */ 

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf("%[^\n]",str);

    int choice;

    printf("Enter a number (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            //Switch case 1:
            int count = 0;
            for(int i=0;str[i]!='\0';i++)
            {
                count++;
            }
            char string2[50];
            for(int i=0;i<count;i++)
            {   
                string2[i] = str[i];
            }

            printf("The copied string is: ");
            for(int i=0;i<count;i++)
            {   
                string2[i];
            }
            
            break;

        case 2:
            //Switch case 2:
            
            for(int i=0;str[i]!='\0';i++)
            {
                count++;
            }
            printf("%d\n", count);
            break;

        case 3:
            //Switch case 3:
            break;

        case 4:
            //switch case 4:
            char string3[50];
            for(int i=count-1;i>0;i--)
            {   
                string3[i] = str[count-i];
            }
            break;

    }
    

    return 0;

}
