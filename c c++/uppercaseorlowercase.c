#include <stdio.h>

int main(){
//a-z = 97-122//
char ch;
printf("enter your letter\n");
scanf("%c",&ch);
if (ch>=97&&ch<=122)
{
 printf("your letter is lowercase");
}
else if (ch>=65&&ch<=90)
{
    printf("your letter is uppercase");
}
else
{
    printf("invalid choice");
}
     return 0;
    }