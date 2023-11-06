#include <stdio.h>
#include <string.h>

struct student {
    int rno;
    char name[20];
    float marks;
};

struct student read_student() {
    struct student s;

    printf("Enter rno.: ");
    scanf("%d", &s.rno);

    printf("Enter name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    return s;
}

void print_student(struct student s) {
    printf("\nRoll no.: %d\n", s.rno);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

struct student find_max_marks(int n,struct student s[])
{
    int max=s[0].marks;
    for(int i=1;i<n;i++)
    {
        if(max<s[i].marks)
            max=s[i].marks;
    }
    printf("%d",max);
};

int main() {
    int n;
    printf("Enter no. of students: ");
    scanf("%d",&n);
    struct student s_arr[n];
    for(int i=0;i<n;i++)
        s_arr[i]= read_student();

    for(int i=0;i<n;i++)
        print_student(s_arr[i]);

        printf("The maximum marks are: ");
        find_max_marks(n,s_arr);
        print_student("\n");
    
    return 0;
}
