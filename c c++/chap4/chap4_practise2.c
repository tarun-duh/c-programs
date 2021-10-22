#include <stdio.h>

int main()
    {
    int x;
    printf("enter no.");
    scanf("%d", &x);

    for (int n = 1; n < 11; n++)
    {
        printf("%d\n", x * n);
    }

    return 0;
}