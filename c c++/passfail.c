#include <stdio.h>

int main()
{
int math ,english,science;
int maximum;
printf("enter maximum marks\n");
scanf("%d",&maximum);
printf("enter english marks\n");
scanf("%d",&english);
printf("enter math marks\n");
scanf("%d",&math);
printf("enter science marks\n");
scanf("%d",&science);
int total=math+english+science;
float percentage=((total)*(100))/(maximum*3);
if (english>maximum*33/100,math>maximum*33/100,science>maximum*33/100,((total)*(100))/(maximum*3)>40)
{
   printf("your percentage is %f you are pass",percentage);
}
else{
    printf("your percentage is %f you are fail",percentage);
}
    return 0;
}