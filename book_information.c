#include<stdio.h>
int main(){
    char book_title;
    char author_name;
    int ISBN;
    float price;
    char publisher;
    int Year_of_publication ;

    printf("enter book title : ");
    scanf("%c"  ,&book_title);
     
    getchar();

    printf("enter author name : ");
    scanf("%c" , &author_name);

    printf("enter ISBN : ");
    scanf("%d" , &ISBN);

    printf("enter price : ");
    scanf("%f" , &price);

    getchar();

    printf("enter Publisher : ");
    scanf("%c" , &publisher );


    printf("enetr Year of Publication : ") ;
    scanf("%d" , &Year_of_publication);

    printf("The book title is : %c\n" , book_title );
    printf("The name of author is : %c\n" ,author_name);
    printf("The ISBN is : %d\n" , ISBN);
    printf("Price of Book is : %f\n" ,price);
    printf("the Publisher is : %c" , publisher);
    return 0;
    
}