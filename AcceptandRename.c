#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char line[200];
    char filename[50];
    char choice;
    printf("Enter filename to create/write: ");
    scanf("%s", filename);
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    getchar(); 
    do {
        printf("Enter a line of text: ");
        gets(line);  
        fputs(line, fp); 
        fputs("\n", fp);   
        printf("Do you want to enter another line? (y/n): ");
        scanf(" %c", &choice);
        getchar();
    } while (choice == 'y' || choice == 'Y');
    fclose(fp);
    printf("\nData written successfully to %s\n", filename);
    return 0;
}
