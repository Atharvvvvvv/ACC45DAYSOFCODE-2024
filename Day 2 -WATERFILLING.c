#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int B1, B2, B3;
        scanf("%d %d %d", &B1, &B2, &B3);
        
        // Sum of full bottles, we need to check empty ones
        int bottles = B1 + B2 + B3;
        
        // If 2 or more bottles are empty, then it's water filling time
        if (bottles <= 1) {
            printf("Water filling time\n");
        } else {
            printf("Not now\n");
        }
    }
    
    return 0;
}
