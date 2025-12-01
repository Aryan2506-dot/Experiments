 #include <stdio.h>
void inputEmployee(char name[], int *id, char dept[], float *salary);
void displayEmployee(char name[], int id, char dept[], float salary);

int main() {
    char name[50], dept[50];
    int id;
    float salary;
    inputEmployee(name, &id, dept, &salary);
    displayEmployee(name, id, dept, salary);

    return 0;
}

void inputEmployee(char name[], int *id, char dept[], float *salary) {
    printf("Enter employee name: ");
    gets(name);   

    printf("Enter employee ID: ");
    scanf("%d", id);
    getchar();    

    printf("Enter department: ");
    gets(dept);  

    printf("Enter salary: ");
    scanf("%f", salary);
}

void displayEmployee(char name[], int id, char dept[], float salary) {
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", name);
    printf("ID: %d\n", id);
    printf("Department: %s\n", dept);
    printf("Salary: %.2f\n", salary);
}
