#include <stdio.h>

int main()
{
char op;
double first,second;
printf("enter your operator (+,-,/,*)\n");
scanf("%c",&op);
printf("enter your first  number\n");
scanf("%lf,",&first);
printf("enter second no.\n");
scanf("%lf",&second);
switch (op)
{
case '+':
    printf("%lf+%lf=%lf",first,second,first+second);
    break;
case '-':
printf("%lf-%lf=%lf",first,second,first*second);
break;
case '*':
printf("%lf*%lf=%lf",first,second,first*second);
 break;
 case '/':
 printf("%lf/%lf=%lf",first,second,first/second);
 break;
default:
    break;
}

    return 0;
}