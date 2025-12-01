#include<stdio.h>

    float areaofcircle(float radius ) {
        float area = 3.14 * radius  * radius  ;
        return area;
    }
    int main(){
        float r , area ;
        printf("enter radius of circle : ");
        scanf("%f" , &r );
        area = areaofcircle(r);

        printf("the area of circle is : %.2f\n" , area );
        return 0;
        

    }

