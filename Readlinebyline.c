#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[200]; 
    printf("Enter filename to read: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }
    printf("\n--- File Content ---\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);  
    fclose(fp);
    }
    return 0;
}
