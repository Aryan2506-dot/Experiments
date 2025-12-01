#include <stdio.h>
#include <string.h>

struct Employee {
    char name[30];
    char address[50];
    float salary;
};

int main() {
    struct Employee e[5], temp;
    int i, j;

    // Input
    printf("Enter details of 5 employees:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Address: ");
        scanf("%s", e[i].address);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(e[i].name, e[j].name) > 0) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    // Output
    printf("\nEmployees in Alphabetical Order:\n");
    for (i = 0; i < 5; i++) {
        printf("%s   %s   %.2f\n", e[i].name, e[i].address, e[i].salary);
    }

    return 0;
}
