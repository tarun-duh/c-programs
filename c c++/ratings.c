#include <stdio.h>

int main()
{
    int ratings;
    printf("enter your ratings\n");
    scanf("%d", &ratings);
    switch (ratings)

        {
        case 1:
            printf("your rating is 1");

            break;
        case 2:
            printf("your rating is 2");
            break;
        case 3:
            printf("your rating is 3"); 
            break;
        case 4:
            printf("your rating is 4"); 
            break;

        case 5:
            printf("your rating is 5");
             break;
        default:
        printf("invalid choice\n");
            break;
        }

    return 0;
}