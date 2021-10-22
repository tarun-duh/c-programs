#include <stdio.h>

int main(){
int i=0,skip=6;
while (i<6)
{
    i++;
    if (i!=skip){
        continue;
    }
    
    else{
        printf("%d\n",i);
    }
}

     return 0;
    }