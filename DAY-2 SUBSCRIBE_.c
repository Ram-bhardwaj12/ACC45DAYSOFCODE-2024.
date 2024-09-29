#include <stdio.h>
int cost_of_subscriptions(int n, int x) {
    int num_subscriptions = (n + 5) / 6;
    int total_cost = num_subscriptions * x;
    return total_cost;
}


int main() {
    int T, n,x;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &n, &x);
        int result = cost_of_subscriptions(n, x);
        printf("%d\n", result);
    }


    return 0;
}
