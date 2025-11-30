/*
Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    int marks;
};

int areIdentical(struct Student s1, struct Student s2) {
    return (s1.id == s2.id) && (s1.marks == s2.marks) && (strcmp(s1.name, s2.name) == 0);
}

int main() {
    struct Student student1, student2;

    printf("Enter details for Student 1 (name id marks): ");
    scanf("%s %d %d", student1.name, &student1.id, &student1.marks);

    printf("Enter details for Student 2 (name id marks): ");
    scanf("%s %d %d", student2.name, &student2.id, &student2.marks);

    if (areIdentical(student1, student2)) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    return 0;
}