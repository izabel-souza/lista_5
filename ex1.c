#include <stdio.h> <stdlib.h> <string.h>

int vowels_counting(char *string, int *p);

int main (void) {

    char string[80];
    printf("Type something: ");
    scanf(" %79[^\n]%c", string);
    int counting = 0;
    vowels_counting(string, &counting);

    printf("%d vowels in the sentence", counting);

    return 0;
}

int vowels_counting(char *string, int* p) {
    
    for(int i = 0; string[i] != '\0'; i++) {
        if((string[i] == 'a') || (string[i] == 'e') || (string[i] == 'i') || (string[i] == 'o') || (string[i] == 'u')) {
            (*p)++;
        }
    }
    return p;
}