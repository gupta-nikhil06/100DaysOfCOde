/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp1, emp2;
    FILE *file;

    printf("Enter Employee ID: ");
    scanf("%d", &emp1.id);
    printf("Enter Employee Name: ");
    scanf("%s", emp1.name);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp1.salary);

    file = fopen("employee.dat", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fwrite(&emp1, sizeof(struct Employee), 1, file);
    fclose(file);
    printf("Employee details stored in file.\n");

    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    fread(&emp2, sizeof(struct Employee), 1, file);
    fclose(file);

    printf("\nEmployee Details Read from File:\n");
    printf("ID: %d\n", emp2.id);
    printf("Name: %s\n", emp2.name);
    printf("Salary: %.2f\n", emp2.salary);

    return 0;
}