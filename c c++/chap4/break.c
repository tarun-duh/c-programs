#include <stdio.h>

int main()
{
int i=0,n;
printf("enter how many value you want\n");
scanf("%d",&n);
do
{
    printf("%d\n",i);
    i++;
    if (i==14)
    {
        break;
    }
    
} while (i<n);

    return 0;
}