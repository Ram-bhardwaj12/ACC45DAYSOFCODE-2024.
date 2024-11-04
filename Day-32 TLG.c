#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);  
    
    int cumulative_score1 = 0, cumulative_score2 = 0;
    int max_lead = 0, winning_player = 0;
    
    for (int i = 0; i < N; i++) {
        int S, T;
        scanf("%d %d", &S, &T); 
        
        cumulative_score1 += S;
        cumulative_score2 += T;
        
        int lead, current_leader;
        if (cumulative_score1 > cumulative_score2) {
            lead = cumulative_score1 - cumulative_score2;
            current_leader = 1;
        } else {
            lead = cumulative_score2 - cumulative_score1;
            current_leader = 2;
        }
        
        if (lead > max_lead) {
            max_lead = lead;
            winning_player = current_leader;
        }
    }
    
    printf("%d %d\n", winning_player, max_lead);
    
    return 0;
}
