#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0;
    int rev_num1 = 0, rev_num2 = 0;

    scanf("%d %d", &num1, &num2);

    if (!(((99 < num1) && (num1 < 1000)) && ((99 < num2) && (num2 < 1000)))){
        printf("not between 99 and 1000");
        return 0;
    }

    for (int place = 100 ; num1 > 0 ; place /= 10){
        rev_num1 += ((num1 % 10) * place);
        num1 /= 10;
    }

    for (int place = 100 ; num2 > 0 ; place /= 10){
        rev_num2 += ((num2 % 10) * place);
        num2 /= 10;
    }

    printf("%d", ((rev_num1 > rev_num2) ? rev_num1 : rev_num2));

    return 0;
}