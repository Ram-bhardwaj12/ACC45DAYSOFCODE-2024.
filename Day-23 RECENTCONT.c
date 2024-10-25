#include <stdio.h>
#include <string.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N; 
        scanf("%d", &N);

        int start38_count = 0, ltime108_count = 0; 
        char code[10];  

    
        for (int i = 0; i < N; i++) {
            scanf("%s", code);

        
            if (strcmp(code, "START38") == 0) {
                start38_count++;
            } else if (strcmp(code, "LTIME108") == 0) {
                ltime108_count++;
            }
        }

    
        printf("%d %d\n", start38_count, ltime108_count);
    }

    return 0;
}
