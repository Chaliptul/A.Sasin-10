#include <stdio.h>
#include <string.h>
int main() {
    char text[200];
    char word[50];
    char *pos;
    int index;

    printf("Enter your world: ");
    scanf(" %[^\n]", text); // 
    
    printf("Enter your world that you looking for: ");
    scanf(" %[^\n]", word); // read the world you needs 

    pos = strstr(text, word);

    if (pos != NULL) {
        index = pos - text;
        printf("Found \"%s\" at %d\n", word, index);
    } else {
        printf(" Not found \"%s\" at the sentence\n", word);
    }

    return 0;
}
