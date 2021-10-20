#include <stdio.h>

int main()
{
float radius;
float pi=3.14;
float height;
printf("enter the radius of the cylinder\n");
scanf("%f",&radius);
printf("enter the height of the cylinder\n");
scanf("%f",&height);
printf("the volume of the cylinder is %f",pi*radius*radius*height);
    return 0;
}