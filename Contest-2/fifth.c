
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    int charge[t];
    int time[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d%*c", &charge[i]);
    }

    for (int i = 0; i < t; i++)
    {
        if (charge[i] >= 0 && charge[i] <= 60)
        {
            time[i] = (60 - charge[i]) * 1 + (80 - 60) * 2 + (100 - 80) * 3;
        }
        else if (charge[i] >= 61 && charge[i] <= 80)
        {
            time[i] = (80 - charge[i]) * 2 + (100 - 80) * 3;
        }
        else
        {
            time[i] = (100 - charge[i]) * 3;
        }
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d minutes\n", time[i]);
    }

    return 0;
}
