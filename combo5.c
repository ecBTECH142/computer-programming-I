#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char full_name[100];
    int i;
    int last_space_index = -1;
    printf("Enter full name (e.g., John David Smith): ");
    fgets(full_name, 100, stdin);
    if (full_name[strlen(full_name) - 1] == '\n') {
        full_name[strlen(full_name) - 1] = '\0';
    }
    for (i = 0; full_name[i] != '\0'; i++) {
        if (full_name[i] == ' ') {
            last_space_index = i;
        }
    }
    printf("Abbreviated name: ");
    if (full_name[0] != '\0') {
        printf("%c. ", toupper(full_name[0]));
        for (i = 1; full_name[i] != '\0' && i < last_space_index; i++) {
            if (full_name[i] == ' ' && full_name[i + 1] != ' ') {
                printf("%c. ", toupper(full_name[i + 1]));
            }
        }
        for (i = last_space_index + 1; full_name[i] != '\0'; i++) {
            printf("%c", full_name[i]);
        }
    }
    printf("\n");
    return 0;
}