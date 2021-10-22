#include <stdio.h>

int main()
{
    int n, i = 2, prime = 1;
printf("enter your no.");
scanf("%d",&n);
do
{
    
    if (n%i==0)
    {
        prime=0;
        break;
    }
    i++;
}
while (i<n);

if (prime==0)
{
    printf("no. is not a prime");
}
else{
    printf("no. is  a prime");
}


    return 0;
}