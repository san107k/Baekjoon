#include <stdio.h>

int main() {
    int num_of_real_divisor = 0;
    int real_divisor = 0;
    int min = 1000000, max = 0;

    scanf("%d", &num_of_real_divisor);

    for (int i = 0 ; i < num_of_real_divisor ; i++) {
        scanf("%d", &real_divisor);
        if (min > real_divisor)
            min = real_divisor;

        if (max < real_divisor)
            max = real_divisor;
    }
    printf("%d", (min * max));

    return 0;
}