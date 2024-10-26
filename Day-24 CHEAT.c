#include <stdio.h>

int main() {
    int T, N;

    
    scanf("%d", &T);

    while (T--) {
        
        scanf("%d", &N);

        if (N < 2) {
            
            printf("0\n");
        } else {
            
            int tuesdays = (N - 2) / 7 + 1;
            printf("%d\n", tuesdays);
        }
    }

    return 0;
}
