#include <stdio.h>
int main() {
int a = 10;   
printf("Outside block: a = %d\n", a);

    {  
         int b = 20;   
        printf("Inside inner block:\n");
        printf("  a = %d (accessible)\n", a);   
        printf("  b = %d (accessible only here)\n", b);
    }  
printf("\nOutside inner block again:\n");
printf("  a = %d (still accessible)\n", a);
{ 
 int c = 30;
        printf("\nInside another block:\n");
        printf("  a = %d\n", a);   
        printf("  c = %d\n", c);   
    }  
    printf("\nOutside all blocks now.\n");

    return 0;
}
