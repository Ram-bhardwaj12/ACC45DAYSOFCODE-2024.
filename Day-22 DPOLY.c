#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N;  
        scanf("%d", &N);

        int coefficients[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &coefficients[i]);
        }
        int degree = -1;
        for (int i = 0; i < N; i++) {
            if (coefficients[i] != 0) {
                degree = i;
            }
        }
        printf("%d\n", degree);
    }

    return 0;
}
