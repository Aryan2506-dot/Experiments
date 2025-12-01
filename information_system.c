#include<stdio.h>
int main(){
    char product_name ;
    int product_id ;
    int quantity ;
    float  price ;
    char manufacturer;
    char category;

    printf(" enter product name : ");
    scanf("%c" , & product_name );

    printf("enter product id : ");
    scanf("%d" , &product_id);

    printf("enter quantity : ");
    scanf("%d" , &quantity );

    printf("enter price : ");
    scanf("%f" , &price);

    getchar();
    printf("enter manufacturer :");
    scanf("%c" , &manufacturer);\

    getchar();

    printf(" enter category : ");
    scanf("%c" , &category  );

    printf("The product is : %c\n " , product_name);
    printf("The product id is :%d\n " , product_id );
    printf("The product quantity is :%d\n " ,quantity );
    printf("price of product is :%f\n " , price);
    printf("Manufacturer is :%c\n " , manufacturer);
    printf(" category is :%c\n " , category  );
    return 0; 
    

}