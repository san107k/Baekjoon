#include <stdio.h>

int main() {
    int num = 0, k = 0;
    int cnt = 0;

    scanf("%d %d", &num, &k);

    for (int i = 1 ; i <= num ; i++) {
        if (num % i == 0)
            cnt++;
        
        if (cnt == k) {
            printf("%d", i);
            return 0;
        }
    }

    printf("%d", 0);

    return 0;
}