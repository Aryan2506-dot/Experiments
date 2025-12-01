#include<stdio.h>
int main(){
    int a = 1 ;
    float b = 1.2 ;
    char ch = '#';
    int *n = &a;
    float *m = &b;
    char *p = &ch;
    
    printf("the value of a is : %d\n" , a);
    printf("The value of pointer pointing to a is : %d\n" , *n);

     printf("the value of b is : %f\n" , b);
    printf("The value of pointer pointing to b is : %f\n" , *m);

     printf("the value of c is : %c\n" , ch);
    printf("The value of pointer pointing to c is : %c\n" , *p);

    return 0; 


    
}