#include <stdio.h>
#include <math.h>
int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0; 
    }
    return 1; 
}

int main() {
    int T, N;

    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        if (is_prime(N)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
