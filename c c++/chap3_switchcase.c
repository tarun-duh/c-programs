#include <stdio.h>

int main()
{
    int age;
    char yc, ycn;
    char op;

    printf(" enter op");
    scanf("%c",&op);
    printf("enter your age");
    scanf("%d", &age);
    switch (age)
    {
    case '>':
        printf("yc", age > lim);
        break;
    case '<':
        printf("ycn", age < lim);
        break;

    default:
        break;
    }

    return 0;
}