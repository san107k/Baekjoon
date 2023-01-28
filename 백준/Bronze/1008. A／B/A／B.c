#include <stdio.h>

int main() {
    double a, b;
    while (1) {
        scanf("%lf %lf", &a, &b);
        if (0 < a && b < 10)
            break;
    }
    printf("%.10lf", a/b);

    return 0;
}