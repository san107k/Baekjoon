#include <stdio.h>

int main() {
    int basket[100] = {0};
    int num_of_basket = 0, times = 0;
    int change_01 = 0, change_02 = 0, temp = 0;

    scanf("%d %d", &num_of_basket, &times);

    for (int ball = 0 ; ball < num_of_basket ; ball++)
        basket[ball] = (ball + 1);

    for (int i = 0 ; i < times ; i++) {
        scanf("%d %d", &change_01, &change_02);
        change_01--;
        change_02--;
        temp = basket[change_01];
        basket[change_01] = basket[change_02];
        basket[change_02] = temp;
    }

    for (int show = 0 ; show < num_of_basket ; show++)
        printf("%d ", basket[show]);

    return 0;
}