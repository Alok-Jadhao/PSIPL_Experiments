#include <stdio.h>
struct student
{
    int rno;
    char name[20];
    float marks;
};

struct student read_student()
{
    struct student s;
    printf("Enter rno.: ");
    scanf("%d",&s.rno);
    getchar();
    printf("Enter name: ");
    scanf("[^\n]",s.name);
    getchar();
    printf("Enter marks: ");
    scanf("%f",&s.name);
    return s;

};

struct student print_student()
{
    struct student s;
    printf("\nRoll no.: ");
    printf("%d",s.rno);
    printf("Name: ");
    printf("[^\n]",s.name);
    printf("Marks: ");
    printf("%f",s.name);
    return s;

};

int main()
{
    struct student s;
    s= read_student();
    return 0;
}
