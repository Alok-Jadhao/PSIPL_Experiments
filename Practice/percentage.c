/*Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100)
using a structure named Marks having elements roll no., name, chem_marks, maths_marks
and phy_marks and then display the percentage of each student. */

#include<stdio.h>

struct Marks
{
    int roll_no;
    char name[50];
    int chem_marks,maths_marks,phy_marks; 
};

void read_input(struct Marks mark[5]){
    int i=0;
    while(i<5){
        printf("Enter roll no.: ");
        scanf("%d",&mark[i].roll_no);
        printf("Enter name: ");
        getchar();
        scanf("%[^\n]",mark[i].name);
        printf("Enter chem_marks: ");
        scanf("%d",&mark[i].chem_marks);
        printf("Enter maths_marks: ");
        scanf("%d",&mark[i].maths_marks);
        printf("Enter phy-marks: ");
        scanf("%d",&mark[i].phy_marks);
        getchar();
        printf("\n");
        i++;
    }
}

float percentage(struct Marks mark[5])
{
    int i=0;
    while(i<5){
        float percent;
        percent=(mark[i].chem_marks+mark[i].maths_marks+mark[i].phy_marks)/3;
        printf("The percentage of student %d is: %.2f. \n",i,percent);

        i++;
    }
}

int main()
{
    struct Marks mark[5];
    read_input(mark);
    percentage(mark);

    return 0;
}