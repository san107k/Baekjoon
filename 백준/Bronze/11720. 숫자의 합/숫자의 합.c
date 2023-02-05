#include <stdio.h>

int main() {
    int num = 0, sum = 0;
    char array[100] = {0};

    scanf("%d", &num);
    scanf("%s", array);

    for (int i = 0 ; i < num ; i++)
        sum += ((int)array[i] - 48); //(int)'0' == 48

    printf("%d", sum); 

    return 0;
}