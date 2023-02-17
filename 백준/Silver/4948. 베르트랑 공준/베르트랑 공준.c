#include <stdio.h>

int main() {
    int num = 0, cnt = 0;
    short prime[246913] = {0};

    prime[0] = prime[1] = -1;
    for (int i = 2 ; i < 246913 ; i++) {
        if (prime[i] == -1)
            continue;

        for (int times = 2 ; (i * times) < 246913 ; times++)
            prime[i * times] = -1;
    }

    while (1) {
        cnt = 0;

        scanf("%d", &num);

        if (num == 0)
            break;

        for (int n = (num + 1) ; n <= (num * 2) ; n++) {
            if (prime[n] == 0)
                cnt++;
        }

        printf("%d\n", cnt);
    }

    return 0;
}
