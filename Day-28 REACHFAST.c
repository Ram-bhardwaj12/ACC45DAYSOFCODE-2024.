#include <stdio.h>
#include <stdlib.h> 

int minimum_steps_to_reach(int A, int B, int K) {
    int distance = abs(B - A);  
    return (distance + K - 1) / K; 
}

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int A, B, K;
        scanf("%d %d %d", &A, &B, &K);
        printf("%d\n", minimum_steps_to_reach(A, B, K));
    }

    return 0;
}
