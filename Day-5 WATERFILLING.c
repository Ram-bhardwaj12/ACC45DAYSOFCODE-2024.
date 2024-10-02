#include <stdio.h>

int main() {
    int X; 
    scanf("%d", &X); 
    while (X--) {
        int B1, B2, B3;
        scanf("%d %d %d", &B1, &B2, &B3); 
        
        int empty_count = 0;
        if (B1 == 0) empty_count++;
        if (B2 == 0) empty_count++;
        if (B3 == 0) empty_count++;

        if (empty_count >= 2) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }

    return 0;
}


