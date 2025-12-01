#include <stdio.h>
void displayStudentInfo(char name[], int roll, float marks);

int main() {
    char name[50];
    int roll;
    float marks;
  printf("Enter student name: ");
    gets(name);
  printf("Enter roll number: ");
    scanf("%d", &roll);
  printf("Enter marks: ");
    scanf("%f", &marks);
 displayStudentInfo(name, roll, marks);
 return 0;
}
void displayStudentInfo(char name[], int roll, float marks) {
    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("Marks: %.2f\n", marks);
}
