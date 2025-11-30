/*
Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

void findTopper(struct Student students[], int n) {
    struct Student *topper = &students[0];
    for (int i = 1; i < n; i++) {
        if (students[i].marks > topper->marks) {
            topper = &students[i];
        }
    }
    printf("Topper: %s (Marks: %d)\n", topper->name, topper->marks);
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }
    
    findTopper(students, n);
    
    return 0;
}