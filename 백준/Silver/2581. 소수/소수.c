#include <stdio.h>

int main(){
    short prime_check = 0;
    int start = 0, end = 0, first_prime = 0, sum = 0;

    scanf("%d", &start);
    scanf("%d", &end);

    while (start <= end) {
        prime_check = 1;

        if (start == 1){
            start++;
            continue;
        }
        
        for (int i = 2 ; i < start ; i++) {
            if (start % i == 0){
                prime_check = 0;
                break;
            }
        }

        if (prime_check == 1){
            sum += start;
            first_prime = (first_prime == 0) ? start : first_prime;
        }

        start++;
    }

    if (first_prime == 0)
        printf("%d", -1);
    
    else
        printf("%d\n%d", sum, first_prime);

    return 0;
}