#include <stdio.h>

int main()
{
    int x = 8, sum, y;
     for (int n = 1; n < 11; n++)
    {
        y = x * n;
        sum += y;
        printf("%d\n", sum);
    }

    return 0;
}