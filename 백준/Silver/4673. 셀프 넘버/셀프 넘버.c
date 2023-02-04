#include <stdio.h>

int main() {
    int array[10000];
    int num = 0, sum = 0, check = 0;

    for (int i = 0 ; i < 10000 ; i++){
        num = i+1;
        sum += num;
        while (num > 0){
            sum += (num%10);
            num /= 10;
        }
        array[i] = sum;
        sum = 0;
    }

    for (int self_number = 1 ; self_number <= 10000 ; self_number++){
        for (int i = 0 ; i < 10000 ; i++){
            if (self_number == array[i]) {
                check = 1;
                break;
            }
        }
        if (check == 0)
            printf("%d\n", self_number);
        check = 0;
    }

    return 0;
}