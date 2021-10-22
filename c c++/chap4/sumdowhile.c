#include <stdio.h>

#include <stdio.h>

int main()
{
int n,sum=0,i=1; 
printf("enter your no.");
scanf("%d",&n);

do
{
    sum+=i;
    i++;
} while (i<=n);


printf("%d\n",sum);

    return 0;
}
