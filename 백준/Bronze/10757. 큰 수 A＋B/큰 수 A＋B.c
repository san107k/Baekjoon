#include <stdio.h>

int main() {

    char input_a[10001] = {0}, input_b[10001] = {0};
    int digit_a = 0, digit_b = 0, cnt = 0, digit_sum = 0;
    short a[10001] = {0}, b[10001] = {0}, carry = 0; // a will be the answer

    scanf("%s %s", input_a, input_b);

    for (digit_a ; input_a[digit_a] != 0 ; digit_a++);
    for (digit_b ; input_b[digit_b] != 0 ; digit_b++);
    digit_a--;
    digit_b--;

    // (int)'1' = 49;
    for (int i = digit_a, cnt = 0 ; i >= 0 ; i--, cnt++)
        a[cnt] = (int)input_a[i] - 48;
    for (int i = digit_b, cnt = 0 ; i >= 0 ; i--, cnt++)
        b[cnt] = (int)input_b[i] - 48;

    digit_sum = (digit_a >= digit_b) ? digit_a : digit_b;

    for (int i = 0 ; i <= digit_sum ; i++) {
        a[i] = a[i] + b[i] + carry;
        carry = a[i] / 10;
        a[i] %= 10;
    }

    if (carry == 1) {
        digit_sum++;
        a[digit_sum] = carry;
    }

    for (int i = digit_sum ; i >= 0 ; i--)
        printf("%d", a[i]);

    return 0;
}