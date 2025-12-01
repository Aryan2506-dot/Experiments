#include <stdio.h>
int main() {
    int a, b, result;
    int choice, op;
printf("Enter two integers (a and b): ");
scanf("%d %d", &a, &b);
 printf("\nChoose operation type:\n");
    printf("1. Relational Operators\n");
    printf("2. Logical Operators\n");
    printf("3. Bitwise Operators\n");
    printf("4. Assignment Operators\n");
    printf("5. Increment/Decrement Operators\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
switch (choice) {
        case 1:
            printf("\nRelational Operators:\n");
            printf("1. a == b\n2. a != b\n3. a > b\n4. a < b\n5. a >= b\n6. a <= b\n");
            printf("Enter operator choice: ");
            scanf("%d", &op);
            switch (op) {
                case 1: result = (a == b); break;
                case 2: result = (a != b); break;
                case 3: result = (a > b); break;
                case 4: result = (a < b); break;
                case 5: result = (a >= b); break;
                case 6: result = (a <= b); break;
                default: printf("Invalid relational operator\n"); return 0;
            }
            printf("Result: %d\n", result);
            break;
 case 2:
            printf("\nLogical Operators:\n");
            printf("1. a && b\n2. a || b\n3. !a\n");
            printf("Enter operator choice: ");
            scanf("%d", &op);
            switch (op) {
                case 1: result = (a && b); break;
                case 2: result = (a || b); break;
                case 3: result = (!a); break;
                default: printf("Invalid logical operator\n"); return 0;
            }
 printf("Result: %d\n", result);
            break;

 case 3:
            printf("\nBitwise Operators:\n");
            printf("1. a & b\n2. a | b\n3. a ^ b\n4. ~a\n5. a << 1\n6. a >> 1\n");
            printf("Enter operator choice: ");
            scanf("%d", &op);
     switch (op) {
                case 1: result = a & b; break;
                case 2: result = a | b; break;
                case 3: result = a ^ b; break;
                case 4: result = ~a; break;
                case 5: result = a << 1; break;
                case 6: result = a >> 1; break;
                default: printf("Invalid bitwise operator\n"); return 0;
            }
            printf("Result: %d\n", result);
            break;

        case 4:
            printf("\nAssignment Operators:\n");
            printf("1. a = b\n2. a += b\n3. a -= b\n4. a *= b\n5. a /= b\n");
            printf("Enter operator choice: ");
            scanf("%d", &op);
            switch (op) {
                case 1: a = b; break;
                case 2: a += b; break;
                case 3: a -= b; break;
                case 4: a *= b; break;
                case 5:
                    if (b != 0) a /= b;
                    else { printf("Division by zero error\n"); return 0; }
                    break;
                default: printf("Invalid assignment operator\n"); return 0;
            }
            printf("New value of a: %d\n", a);
            break;
        case 5:
            printf("\nIncrement/Decrement Operators:\n");
            printf("1. ++a\n2. a++\n3. --a\n4. a--\n");
            printf("Enter operator choice: ");
            scanf("%d", &op);
            switch (op) {
                case 1: result = ++a; break;
                case 2: result = a++; break;
                case 3: result = --a; break;
                case 4: result = a--; break;
                default: printf("Invalid increment/decrement operator\n"); return 0;
            }
            printf("Result: %d, Current a: %d\n", result, a);
            break;
           default:
            printf("Invalid operation type selected.\n");
        }
return 0;
}
