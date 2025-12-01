#include<stdio.h>
int main(){
    int a;
    float b;
    char ch;

    int *n =&a;
    float *m= &b;
    char *p = &ch;

    printf("The address of a is : %p\n" , n);
    printf("The address of b is : %p\n " , m);
    printf("The address of c is :%p\n" , p );

    n++;
    m++;
    p++;

printf("The address of a is : %p\n" , n);
    printf("The address of b is : %p\n " , m);
    printf("The address of c is :%p\n" , p );


return 0 ; 
}