#include <stdio.h>

int main(){
    int number = 0;

    scanf("%d", &number);

    while (number != 1) {
        for (int i = 2 ; i <= number ; i++) {
            if ((number % i) == 0){
                printf("%d\n", i);
                number /= i;
                break;
            }
        }
    }

    return 0;
}