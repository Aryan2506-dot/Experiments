#include<stdio.h>
struct student {
    char name[100];
    int roll_number ; 
    int marks ; 

};

int main(){
    struct student s1 ;
    printf("Enter name of student : ");
    fgets(s1.name , 100 , stdin);

    printf("Enter roll number of student : ");
    scanf("%d" , &s1.roll_number);

    printf("Enter Marks of Student : ");
    scanf("%d" , &s1.marks);

    printf("The Name of student is : %s" , s1.name);
    printf("The roll number of student is : %d\n" , s1.roll_number);
    printf("The marks obtain bt student is : %d\n" , s1.marks);


    return 0; 
}