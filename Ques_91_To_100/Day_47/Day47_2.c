/*
Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/


#include <stdio.h>
#include <string.h>


void findLongestWord(char *sentence, char *longestWord) {
    int maxLength = 0;
    char *word;
    
    word = strtok(sentence, " ");
    while (word != NULL) {
        int length = strlen(word);
        if (length > maxLength) {
            maxLength = length;
            strcpy(longestWord, word);
        }
        word = strtok(NULL, " ");
    }
}

int main() {
    char sentence[256];
    char longestWord[100] = "";

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0; 

    findLongestWord(sentence, longestWord);

    printf("Longest word: %s\n", longestWord);

    return 0;
}


