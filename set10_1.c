#include <stdio.h>

#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((b) != 0 ? ((a) / (b)) : 0)   

int main() {

    int x = 20, y = 10;

    printf("Addition: %d + %d = %d\n", x, y, ADD(x, y));
    printf("Subtraction: %d - %d = %d\n", x, y, SUB(x, y));
    printf("Multiplication: %d * %d = %d\n", x, y, MUL(x, y));
    printf("Division: %d / %d = %d\n", x, y, DIV(x, y));

    return 0;
}
