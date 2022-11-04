#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N;
    scanf("%d", &N);
    int marks[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &marks[i]);
    }
    int max = marks[0];
    for (int i = 1; i < N; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", max - marks[i]);
    }
    return 0;
}
