#include <stdio.h>
int number = 10;
void showNumber() {
    printf("Inside showNumber(): number = %d\n", number);
}

void changeNumber() {
    number = number + 5;
    printf("Inside changeNumber(): number changed to %d\n", number);
}

int main() {
    printf("Inside main(): number = %d\n", number);
showNumber();      
changeNumber();    
showNumber();        

 return 0;
}
