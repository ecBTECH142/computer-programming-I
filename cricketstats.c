#include <stdio.h>
#include <string.h>

#define MAX 10
struct cricketer {
    char name[50];
    int age;
    int matches;
    float avg_runs;
};

int main() {
    struct cricketer players[MAX];
    int n;

    printf("Enter number of cricketers (max %d): ", MAX);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        getchar(); 
        printf("\nEnter details for cricketer %d:\n", i + 1);
        printf("Name: ");
        fgets(players[i].name, sizeof(players[i].name), stdin);
        players[i].name[strcspn(players[i].name, "\n")] = '\0'; 
        printf("Age: ");
        scanf("%d", &players[i].age);
        printf("Number of Test Matches: ");
        scanf("%d", &players[i].matches);
        printf("Average Runs: ");
        scanf("%f", &players[i].avg_runs);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (players[i].avg_runs > players[j].avg_runs) {
                struct cricketer temp = players[i];
                players[i] = players[j];
                players[j] = temp;
            }
        }
    }
    printf("\n--- Cricketer Records Sorted by Average Runs ---\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s | Age: %d | Matches: %d | Avg Runs: %.2f\n",
               players[i].name, players[i].age, players[i].matches, players[i].avg_runs);
    }
    return 0;
}
