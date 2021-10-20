#include <stdio.h>

int main()
{
int math ,english,science;


printf("enter english marks\n");
scanf("%d",&english);
printf("enter math marks\n");
scanf("%d",&math);
printf("enter science marks\n");
scanf("%d",&science);
int total=math+english+science;
float percentage=total/3;
if (english>33&&math>33&&science>33&&percentage>40)//you can use , instead of &&//
{
   printf("your percentage is %f you are pass",percentage);
}
else{
    printf("your percentage is %f you are fail",percentage);
}
    return 0;
}