 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str;
    int size, newSize;
 
    printf("Enter initial size of the string: ");
    scanf("%d", &size);

   
    str = (char *)malloc(size * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

     
    getchar();
 
    printf("Enter your string: ");
    fgets(str, size, stdin);

    printf("\nYou entered: %s", str);

 
    printf("\nEnter new expanded size: ");
    scanf("%d", &newSize);

   
    str = (char *)realloc(str, newSize * sizeof(char));
    if (str == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }
 
    getchar();

 
    printf("Enter more characters to append: ");
    fgets(str + strlen(str), newSize - strlen(str), stdin);
 
    printf("\nFinal string: %s", str);

     
    free(str);

    return 0;
}
