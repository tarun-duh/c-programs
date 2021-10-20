#include <stdio.h>

int main()
{
int age;
int vippass;

printf("enter the your age \n");
scanf("%d",&age);
printf("press 1 if you have vip pass or press 0 ");
scanf("%d",&vippass);
if(age>18,age<75&&vippass==1)//both conditions has to be true in "and" operator
{
printf("you can drive",age);
}
else
{
    printf("you can't drive",age);

}
    return 0;
}