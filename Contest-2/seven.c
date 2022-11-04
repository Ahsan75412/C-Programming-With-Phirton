
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, K;
    scanf("%d",&N);
    int rolls[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &rolls[i]);
    }
    scanf("%d", &K);
    for(int i = K; i < N; i++) {
        printf("%d ", rolls[i]);
    }
    for(int i = 0; i < K; i++) {
        printf("%d ", rolls[i]);
    }
    
    
    return 0;
}