/*
Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student students[], int count) {
    struct Student topStudent = students[0];
    for (int i = 1; i < count; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    return topStudent;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }

    struct Student topStudent = getTopStudent(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", topStudent.name, topStudent.roll, topStudent.marks);

    return 0;
}