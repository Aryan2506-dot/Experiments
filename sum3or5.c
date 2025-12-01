#include<stdio.h>
int main(){
    int  sum =0 ;
    for(int i = 1 ; i < 1000 ; i++){
        if (i % 3 == 0 || i % 5 == 0 ){

            sum = sum + i ;

        }
         
    }

    printf("the sum of multioles of 3 or 5 below 1000 is : %d" , sum );

    return 0;
    
}