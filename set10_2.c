#include <stdio.h>    // printf, scanf
#include <ctype.h>    // toupper, isalpha
#include <stdlib.h>   // malloc, free, rand
#include <assert.h>   // assert
#include <stdarg.h>   // variadic function (sum)
#include <time.h>     // time, srand
#include <math.h>     // sqrt, pow
#include <string.h>   // strcpy, strlen

// Variadic function to sum numbers (uses stdarg.h)
int sum(int count, ...) {
    va_list args;
    va_start(args, count);

    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    
    va_end(args);
    return total;
}

int main() {

    printf("Demonstrating Standard Libraries in C\n\n");

    // ---------- string.h ----------
    char name[20];
    strcpy(name, "hello");
    printf("String copied using strcpy(): %s\n", name);
    printf("Length of string (strlen): %lu\n\n", strlen(name));

    // ctype.h
    printf("Uppercase of '%c' using toupper(): %c\n\n", name[0], toupper(name[0]));

    // stdlib.h
    int *ptr = (int *)malloc(sizeof(int));
    assert(ptr != NULL);   // assert.h
    *ptr = 25;
    printf("Memory allocated using malloc, value stored: %d\n", *ptr);

    srand(time(NULL));  //time.h 
    printf("Random number (rand): %d\n\n", rand() % 100);

    // math.h 
    printf("Square root of 25 (sqrt): %.2f\n", sqrt(25));
    printf("2 raised to power 5 (pow): %.2f\n\n", pow(2, 5));

    // stdarg.h
    printf("Sum using variadic function (sum): %d\n\n", sum(4, 10, 20, 30, 40));

    //  stdio.h 
    printf("All libraries demonstrated successfully!\n");

    free(ptr);   

    return 0;
}
