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

int main() {
    struct student s;
    s = read_student();
    print_student(s);
    
    return 0;
}
