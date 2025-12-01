#include<stdio.h>
struct book{
    char book_name[100];
    char book_title[100];
    char author_name[100];
    int book_id ;
    int price ;

};

int main(){
    struct book b1 , b2 ,b3 , b4 ;

    printf("Enert book name : ");
     fgets(b1.book_name , 100 , stdin); 

    printf("Enetr book title : ");
     fgets(b1.book_title , 100 , stdin); 
    printf("Enetr Author Name :  ");
     fgets(b1.author_name, 100 , stdin); 

    printf("Enetr the book id : ");
    scanf("%d" , &b1.book_id );

    printf("Enetr book price : ");
    scanf("%d" , &b1.price);
  
    printf("The name of the book is : %s" , b1.book_name);
    printf("The title of the book is : %s"  , b1.book_title);
    printf("The author of the book is : %s" , b1.author_name);
    printf("The id of the book is : %d\n" , b1.book_id);
    printf("The price of the book is : %d\n" , b1.price);


    
    return 0;
     

}