#include <stdio.h>

int main() {
    int basket[100] = {0};
    int num_of_basket = 0, times = 0;
    int from = 0, to = 0, ball = 0;

    scanf("%d %d", &num_of_basket, &times);

    for (int i = 0 ; i < times ; i++) {
        scanf("%d %d %d", &from, &to, &ball);

        for (int put = from ; put <= to; put++)
            basket[put - 1] = ball;
    }

    for (int n = 0 ; n < num_of_basket ; n++)
        printf("%d ", basket[n]);

    return 0;
}