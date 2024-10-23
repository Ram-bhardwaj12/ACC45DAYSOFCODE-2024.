#include <stdio.h>
int minimum_attacks_to_win(int H, int X, int Y) {
    int attacks_without_special = (H + X - 1) / X;
    int attacks_with_special;
    if (H <= Y) {
        attacks_with_special = 1;  
    } else {
        int remaining_health = H - Y;
        int attacks_after_special = (remaining_health + X - 1) / X;
        attacks_with_special = 1 + attacks_after_special;
    }
    return (attacks_without_special < attacks_with_special) 
           ? attacks_without_special 
           : attacks_with_special;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y); 
        int result = minimum_attacks_to_win(H, X, Y);
        printf("%d\n", result);
    }

    return 0;
}
