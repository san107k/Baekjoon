#include <stdio.h>

int main() {
    int basket[100] = {0};
    int num_of_basket = 0, times = 0;
    int from = 0, until = 0, temp[100] = {0};

    scanf("%d %d", &num_of_basket, &times);

    for (int ball = 0 ; ball < num_of_basket ; ball++)
        basket[ball] = (ball + 1);

    for (int i = 0 ; i < times ; i++) {
        scanf("%d %d", &from, &until);

        if (from == until)
            continue;

        from--;
        until--;

        for (int f = from ; f <= until ; f++)
            temp[f] = basket[f];

        for (int f = from, u = until ; f <= until ; f++, u--)
            basket[f] = temp[u];
    }

    for (int show = 0 ; show < num_of_basket ; show++)
        printf("%d ", basket[show]);

    return 0;
}