#include <stdio.h>
#include <math.h>

int tournament_time(int N, int A, int B) {
    int rounds = log2(N); 
    int total_time = A * rounds + B * (rounds - 1); 
    return total_time;
}

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B); 
        int result = tournament_time(N, A, B);
        printf("%d\n", result); 
    }

    return 0;
}

