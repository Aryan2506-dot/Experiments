#include<stdio.h>

    void modify_value(int *a ,  int *b );
     



    int main (){
        int n = 5 ; 
        int m =10;
        
      printf("value of a before calling function  : %d \n" , n);
      printf("the value of b before calling function : %d\n" , m);
        

       modify_value(&n , &m );
       printf("The value of a after calling function  :%d\n" , n);       
       printf("The value of b after calling function  :%d\n" , m);
        return 0; 

    }


void modify_value(int *a ,  int *b){
    *a =*a + 50 ;
    *b = *b + 4; 

}