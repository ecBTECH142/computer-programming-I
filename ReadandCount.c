#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int lines = 0, words = 0, chars = 0, spaces = 0;
    int inWord = 0;  
    printf("Enter filename to read: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        chars++;  
        if (ch == ' ') {
            spaces++;
        }
        if (ch == '\n') {
            lines++;
        }
        if (isspace(ch)) {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }
    if (inWord) {
        words++;
    }
    fclose(fp);
    printf("\n--- File Statistics ---\n");
    printf("Lines      : %d\n", lines);
    printf("Words      : %d\n", words);
    printf("Characters : %d\n", chars);
    printf("Spaces     : %d\n", spaces);
    return 0;
}
