#include <stdio.h>

int main() {
    int times = 0;
    int num_01 = 0, num_02 = 0;
    int GCD = 0;

    scanf("%d", &times);

    for (int i = 0 ; i < times ; i++) {
        scanf("%d %d", &num_01, &num_02);

        for (GCD = (num_01 < num_02) ? num_01 : num_02 ; !(num_01 % GCD == 0 && num_02 % GCD == 0) ; GCD--);

        printf("%d\n", (GCD * (num_01 / GCD) * (num_02 / GCD)));
    }

    return 0;
}