#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, newSize, i;
 
    printf("Enter initial size of array: ");
    scanf("%d", &n);
 
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

 
    printf("\nEnter %d values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

 
    printf("\nEnter new size (greater than %d): ", n);
    scanf("%d", &newSize);

  
    arr = (int *)realloc(arr, newSize * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

   
    printf("\nEnter %d new values:\n", newSize - n);
    for (i = n; i < newSize; i++) {
        scanf("%d", &arr[i]);
    }
 
    printf("\nArray after reallocation:\n");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

   
    free(arr);

    return 0;
}
