#include <stdio.h>
int max_score(int X, int Y) {
    int score_A_first = (500 - 2 * X) + (1000 - 4 * (X + Y));
    int score_B_first = (1000 - 4 * Y) + (500 - 2 * (X + Y));
    return (score_A_first > score_B_first) ? score_A_first : score_B_first;
}

int main() {
    int T, X, Y;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &X, &Y);
        printf("%d\n", max_score(X, Y));
    }
    
    return 0;
}
