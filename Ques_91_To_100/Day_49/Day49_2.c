/*
Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    printf("Enter full name: ");
    scanf("%[^\n]", name); 

    int len = strlen(name);
    int word_count = 1;
    int last_space_pos = -1;
    
    for(int i = 0; i < len; i++){
        if(name[i] == ' '){
            word_count++;
            last_space_pos = i;
        }
    }
    
    int current_word = 1;
    for(int i = 0; i < len; i++){
        if(i == 0 || name[i-1] == ' '){
            if(current_word < word_count){
                printf("%c.", name[i]);
                current_word++;
            } else {
                printf("%s", &name[last_space_pos + 1]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}