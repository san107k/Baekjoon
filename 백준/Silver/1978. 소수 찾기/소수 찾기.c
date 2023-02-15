#include <stdio.h>

int main(){
    short prime = 0;
    int num_of_numbers = 0, cnt = 0;
    int numbers[100] = {0};

    scanf("%d", &num_of_numbers);

    for (int i = 0 ; i < num_of_numbers ; i++) {
        scanf("%d", &numbers[i]);
        
        if (numbers[i] == 1)
            continue;

        prime = 1;
        for (int denominator = 2 ; denominator < numbers[i] ; denominator++) {
            if (numbers[i] % denominator == 0) {
                prime = 0;
                break;
            }
        }

        if (prime == 1)
            cnt++;
    }

    printf("%d", cnt);

    return 0;
}