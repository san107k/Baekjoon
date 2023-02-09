#include <stdio.h>

int main(){
    int num = 0, check = 0;
    int denominator = 1, numerator = 1;

    scanf("%d", &num);

    for (int i = 0 ; i < (num - 1) ; i++){
        if (check == 0) {
            if (numerator == 1){
                denominator++;
                check = 1;
            }
            else {
                denominator++;
                numerator--;
            }
        }
        else { // check == 1
            if (denominator == 1){
                numerator++;
                check = 0;
            }
            else {
                numerator++;
                denominator--;
            }
        }
    }

    printf("%d/%d", numerator, denominator);

    return 0;
}