#include <stdio.h>

void find_server(int T, int test_cases[][2]) {
    for (int i = 0; i < T; i++) {
        int P = test_cases[i][0];
        int Q = test_cases[i][1];
        int total_points = P + Q;
        
        int cycle = total_points / 2;
        
        if (cycle % 2 == 0) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    int test_cases[T][2];
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &test_cases[i][0], &test_cases[i][1]);
    }

    find_server(T, test_cases);
    
    return 0;
}
