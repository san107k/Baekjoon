#include <stdio.h>

int main(){
    unsigned long long  tax = 0, salary = 0, laptop = 0;
    unsigned int sell = 0;

    scanf("%d %d %d", &tax, &salary, &laptop);

    if (salary >= laptop){
        printf("%d", -1);
        return 0;
    }

    sell = (tax / (laptop - salary)) + 1;
    printf("%d", sell);

    return 0;
}