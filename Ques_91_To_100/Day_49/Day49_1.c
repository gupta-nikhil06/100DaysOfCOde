/*
Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    printf("Enter full name: ");
    scanf("%[^\n]", name); 

    int len = strlen(name);
    for(int i = 0; i < len; i++){
        if(i == 0 || name[i-1] == ' '){
            printf("%c.", name[i]);
        }
    }
    printf("\n");
    return 0;
}