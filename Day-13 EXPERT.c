#include <stdio.h>

int main() {
    int T, X, Y;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &X, &Y);
        if (2 * Y >= X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
