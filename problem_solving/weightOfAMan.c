#include<stdio.h>
int main()
{
    int w , n ;
    int sum = 0;
    printf("Enter The Number of Passengers : ");
    scanf("%d" , &n);

    for(int i=1; i<=n ; i++)
    {
        printf("Enter passengers weights: ");
        scanf("%d", &w);
        sum += w;
    }

    printf("Total sum of weights = %d" , sum);

    return 0;
}