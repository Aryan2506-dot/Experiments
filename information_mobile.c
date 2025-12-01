#include<stdio.h>
int main(){
    char Brand_name;
    char Model_name;
    int Serial_Number;
    float Price;
    char color;
    int Battery_capacity;

    printf("Enter Brand name : " );
    scanf("%c" , &Brand_name);

    getchar();


    printf("Enter Model Name : ");
    scanf("%c", &Model_name);

    printf("enter Serial Number : ");
    scanf("%d" , &Serial_Number);

    printf("Enter Price : ");
    scanf("%f" , &Price);
     
    getchar();
     
    printf("Enter color : ");
    scanf("%c" , &color);

    getchar();

    
    printf("Enter battery capacity : ");
    scanf("%d" , &Battery_capacity);


    printf("The Brand Name is :%c\n" , Brand_name);
    printf("The model name is : %c\n" , Model_name);
    printf("The Serial Number is : %d\n", Serial_Number);
    printf("The Price is :%f\n " , Price);
    printf("The color is : %c\n" , color );
    printf("The Battery Capacity is : %d\n" , Battery_capacity );



    
    return 0;
    


}