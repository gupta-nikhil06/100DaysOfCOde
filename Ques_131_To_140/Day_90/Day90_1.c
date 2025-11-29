/*
Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    char input[20];
    struct Person p;
    printf("Enter Gender: ");
    scanf("Gender=%s", input);

    if (strcmp(input, "MALE") == 0) {
        p.gender = MALE;
        printf("Male\n");
    } else if (strcmp(input, "FEMALE") == 0) {
        p.gender = FEMALE;
        printf("Female\n");
    } else {
        printf("Invalid Gender\n");
    }

    return 0;
}
