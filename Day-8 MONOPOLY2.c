#include <stdio.h>

void check_monopoly(int P, int Q, int R, int S) {
    if (P > (Q + R + S)) {
        printf("YES\n");
    } else if (Q > (P + R + S)) {
        printf("YES\n");
    } else if (R > (P + Q + S)) {
        printf("YES\n");
    } else if (S > (P + Q + R)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int T;

    scanf("%d", &T);
    
    while (T--) {
        int P, Q, R, S;
        
        scanf("%d %d %d %d", &P, &Q, &R, &S);
        
        check_monopoly(P, Q, R, S);
    }
    
    return 0;
}


