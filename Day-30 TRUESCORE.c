#include <stdio.h>

void check_score_consistency(int T) {
    for (int i = 0; i < T; i++) {
        int A, B, C, D;
        scanf("%d %d", &A, &B);
        scanf("%d %d", &C, &D);
        if (C >= A && D >= B) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    check_score_consistency(T);
    
    return 0;
}
