#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct employee {
    char name[30];
    int id;
    float salary;
    struct date dob;   
};

int main() {
    struct employee e;

    // Input
    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter employee salary: ");
    scanf("%f", &e.salary);

    printf("Enter employee date of birth (day month year): ");
    scanf("%d %d %d", &e.dob.day, &e.dob.month, &e.dob.year);

    // Output
    printf("\n--- Employee Details ---\n");
    printf("Name       : %s\n", e.name);
    printf("ID         : %d\n", e.id);
    printf("Salary     : %.2f\n", e.salary);
    printf("Birth Date : %02d-%02d-%04d\n", e.dob.day, e.dob.month, e.dob.year);

    return 0;
}
