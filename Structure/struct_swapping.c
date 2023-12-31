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

struct student find_max_marks(int n, struct student s[]) {
    float max = s[0].marks;
    int max_index = 0;

    for (int i = 1; i < n; i++) {
        if (max < s[i].marks) {
            max = s[i].marks;
            max_index = i;
        }
    }

    return s[max_index];
};


void sort_name_wise(int n,struct student s[])
{
    for(int i=0;i<n-1;i++)//no. of iterations
    {
        int min_idx = i;


        for(int j=i+1;j<n;j++)
        {
            if(strcmp(s[j].name,s[min_idx].name)==-1)
                min_idx=j;
        }

        //swapping s[i],s[min_idx]
        struct student temp;
        temp = s[i];
        s[i]=s[min_idx];
        s[min_idx]=temp;
        
    }
}

int main() {
    int n;
    printf("Enter no. of students: ");
    scanf("%d",&n);
    struct student s_arr[n];
    for(int i=0;i<n;i++)
        s_arr[i]= read_student();

    for(int i=0;i<n;i++)
        print_student(s_arr[i]);
    
    printf("\n");

    struct student max_marks_student = find_max_marks(n, s_arr);
    printf("The student with max marks is: ");
    print_student(max_marks_student);
    printf("\n");

    sort_name_wise(n,s_arr);
    printf("\nStudent sorted according to name alphabetically: ");
    for(int i = 0;i<n;i++)
    {
        print_student(s_arr[i]);
    }
    
    return 0;
}
