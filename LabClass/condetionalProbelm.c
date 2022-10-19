#include<stdio.h>
int main()
{
    int w;
    printf("Please Enter The Weight of Melon:-");
    scanf("%d" , &w);

    if (w%2==0 & w!=2)
    {
        printf("Possible");
    }
    else{
        printf("Impossible");
    }

    return 0;
    
}