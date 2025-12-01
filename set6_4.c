#include <stdio.h>

struct Employee {
    char name[30];
    char address[50];
    int age;
    float salary;
};

int main() {
    int n, i;
    float sum = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Address: ");
        scanf("%s", e[i].address);

        printf("Age: ");
        scanf("%d", &e[i].age);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

        sum += e[i].salary;
    }

    float avg = sum / n;

    printf("\nAverage Salary = %.2f\n", avg);

    return 0;
}
