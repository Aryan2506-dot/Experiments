#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char fname[20];
    char lname[20];
};

int main() {
    struct Student s[5], temp;
    int i, j;
 printf("Enter roll_no, fname, lname of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("First Name: ");
        scanf("%s", s[i].fname);
        printf("Last Name: ");
        scanf("%s", s[i].lname);
    }

  
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (s[i].roll_no > s[j].roll_no) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

  
    printf("\nRecords in Ascending Order of Roll No:\n");
    for (i = 0; i < 5; i++) {
        printf("%d  %s  %s\n", s[i].roll_no, s[i].fname, s[i].lname);
    }

    return 0;
}
