#include <stdio.h>

int main()
{
int n,sum=0,i=1;
printf("enter your no.");
scanf("%d",&n);
for (i; i <= n; i++)
{
    sum+=i;
    
}
printf("%d\n",sum);

    return 0;
}