#include <stdio.h>
float calculateSalary(float basic, int isMetro);
int main() {
float basic, total;
int choice;
printf("Enter basic salary: ");
scanf("%f", &basic);
 printf("Is the employee from a metro city? (1 = Yes, 0 = No): ");
scanf("%d", &choice);
total = calculateSalary(basic, choice);
printf("\n--- Salary Details ---\n");
 printf("Basic Salary: %.2f\n", basic);
 printf("Total Monthly Salary: %.2f\n", total);
  return 0;
}
float calculateSalary(float basic, int isMetro) {
float hra, da, total;
  if (isMetro == 1)
 hra = 0.15 * basic;   
   else
 hra = 0.10 * basic;   
 da = 0.05 * basic;        
 total = basic + hra + da;
return total;
}
