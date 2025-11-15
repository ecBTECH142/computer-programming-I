#include <stdio.h>
#include <ctype.h>

int count_gender_recursive(int count, int total_students, int *boys_ptr, int *girls_ptr) {
    if (count < 1) {
        return 1;
    }

    char code;
    printf("Enter gender code for student #%d (B/G): ", total_students - count + 1);
    scanf(" %c", &code);
    count_gender_recursive(count - 1, total_students, boys_ptr, girls_ptr);
    code = toupper(code);
    if (code == 'B') {
        (*boys_ptr)++;
    } else if (code == 'G') {
        (*girls_ptr)++;
    } else {
       }
    return 1;
}

int main() {
    int n = 50; 
    int boys_count = 0;
    int girls_count = 0;
    printf("Counting gender for %d students:\n", n);
    count_gender_recursive(n, n, &boys_count, &girls_count);
    printf("\nClass Tally:\n");
    printf("Boys: %d\n", boys_count);
    printf("Girls: %d\n", girls_count);
    return 0;
}