#include <stdio.h>

int main() {
    int basket[101] = {0}, temp[101] = {0};
    int num_of_basket = 0, times = 0;
    int begin = 0, mid = 0, end = 0;

    scanf("%d %d", &num_of_basket, &times);

    for (int initialization = 0 ; initialization < num_of_basket ; initialization++)
        basket[initialization] = (initialization + 1);

    for (int i = 0 ; i < times ; i++) {
        scanf("%d %d %d", &begin, &end, &mid);

        if (begin == mid)
            continue;

        begin--; end--; mid--;

        for (int num = mid, cnt = 0 ; 1 ; num++, cnt++) {
            temp[cnt] = basket[num];
            if (num == end) {
                num = (begin - 1); //if it continues, num++ comes next
            }
            else if (num == (mid - 1))
                break;
        }

        for (int num = begin, cnt = 0 ; num <= end ; num++, cnt++)
            basket[num] = temp[cnt];
    }

    for (int show = 0 ; show < num_of_basket ; show++)
        printf("%d ", basket[show]);

    return 0;
}