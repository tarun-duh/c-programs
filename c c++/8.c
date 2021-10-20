#include <stdio.h>

int main()
{
   int p, r, t;
    printf("enter the value of p which is principle  amount\n");
    scanf("%d", &p);
    printf("enter the value of r which is rate of intrest\n");
    scanf("%d", &r);
    printf("enter the value of t which is time durationt\n");
    scanf("%d", &t);
    printf("the simple intrest is %d ", p * r / 100 * t);
    return 0;
}