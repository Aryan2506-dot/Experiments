#include <stdio.h>
int globalVar = 10;
void showLocal() {
int localVar = 20;
printf("Inside showLocal():\n");
printf("  globalVar = %d\n", globalVar);
printf("  localVar = %d\n", localVar);
}

int main() {
printf("Inside main():\n");
printf("  globalVar = %d\n", globalVar);
showLocal();
printf("\nOutside showLocal(): localVar cannot be accessed here!\n");
return 0;
}
