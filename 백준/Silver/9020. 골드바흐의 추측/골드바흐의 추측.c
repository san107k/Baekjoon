#include <stdio.h>

int main() {
    int test_case = 0, n = 0;
    short prime_check[10001] = {0};
    int prime_num[1000] = {0};
    int num1 = 0, num2 = 0;
    
    prime_check[0] = prime_check[1] = -1;
    for (int i = 2 ; i <= 10000 ; i++) {
        if (prime_check[i] == -1)
            continue;

        for (int j = 2 ; (i * j) <= 10000 ; j++) {
            prime_check[i * j] = -1;
        }
    }

    for (int j = 0 ; j <= 10000 ; j++) {
        if (prime_check[j] == 0) {
            prime_num[n] = j; // Using variable n temporarily
            n++;
        }
    }

    scanf("%d", &test_case);

    for (int times = 0 ; times < test_case ; times++) {
        scanf("%d", &n);

        for (int p1 = 0 ; p1 <= 1000 ; p1++) {
            for (int p2 = 0 ; p2 <= 1000; p2++) {
                if ((p1 < p2) || ((p1 >= n)))
                    break;

                else if ((prime_num[p1] + prime_num[p2]) == n) {
                    if ((num1 == 0) || ((num1 - num2) > (prime_num[p1] - prime_num[p2]))) {
                        num1 = prime_num[p1];
                        num2 = prime_num[p2];
                    }
                }
            }
        }

        printf("%d %d\n", num2, num1);

        num1 = num2 = 0;
    }

    return 0;
}