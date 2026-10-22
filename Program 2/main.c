#include <stdio.h>
#include <stdlib.h>

//Kartik(U32JX26S0029)
int main()
{
    float length, width;
    float radius;
    float base, height;
    float area, perimeter, circumference;

    /* Rectangle */
    printf("Enter length and width of rectangle: ");
    scanf("%f %f",&length,&width);
    area = length * width;
    perimeter = 2 *(length + width);
    printf("Rectangle Area= %.2f\n",area);
    printf("Rectangle perimeter= %.2f\n",perimeter);

    /* Circle */
    printf("\nEnter radius of circle: ");
    scanf("%f",&radius);
    area = 3.14159 * radius * radius;
    circumference= 2 * 3.14159 * radius;
    printf("Circle area=%.2f\n",area);
    printf("Circle circumference=%.2f\n",circumference);
    /* Triangle */
    printf("\nEnter base and height of triangle: ");
    scanf("%f %f",&base,&height);
    area = 0.5 * base * height;
    printf("Triangle Area=%.2f\n",area);
    return 0;
}
