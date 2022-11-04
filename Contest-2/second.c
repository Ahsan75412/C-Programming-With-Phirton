#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N, K;
    scanf("%d %d", &N, &K);
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        int Run;
        scanf("%d", &Run);
        if (Run < K)
        {
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}