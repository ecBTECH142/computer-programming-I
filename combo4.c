#include <stdio.h>
#include <string.h>

int main() {
    char book_names[3][50];
    int i;
    for (i = 0; i < 3; i++) {
        printf("Enter name of Book %d: ", i + 1);
        fgets(book_names[i], 50, stdin);
        if (book_names[i][strlen(book_names[i]) - 1] == '\n') {
            book_names[i][strlen(book_names[i]) - 1] = '\0';
        }
    }
    printf("\nStored Book Names:\n");
    for (i = 0; i < 3; i++) {
        printf("Book %d: %s\n", i + 1, book_names[i]);
    }
    return 0;
}