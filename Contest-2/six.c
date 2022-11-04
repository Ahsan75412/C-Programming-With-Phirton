
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    long long int secrets[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%lld", &secrets[i]);
    }

    for (int i = 0; i < t; i++)
    {
        int isPrime = 1;
        if (secrets[i] == 1)
        {
            isPrime = 0;
        }
        else
        {
            for (int j = 2; j < secrets[i]; j++)
            {
                if (secrets[i] % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}