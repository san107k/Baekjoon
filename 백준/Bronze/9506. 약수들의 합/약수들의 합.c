#include <stdio.h>

int main() {
    while (1) {
        int num = 0, sum = 0;

        scanf("%d", &num);

        if (num == -1)
            return 0;

        for (int i = 1 ; i < num ; i++)
            if (num % i == 0)
                sum += i;

        if (sum == num) {
            printf("%d = 1", num);
            for (int i = 2 ; i < num ; i++)
                if (num % i == 0)
                    printf(" + %d", i);
            printf("\n");
        }

        else
            printf("%d is NOT perfect.\n", num);
    }

    return 0;
}