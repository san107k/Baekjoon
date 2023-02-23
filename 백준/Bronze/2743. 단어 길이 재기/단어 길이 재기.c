#include <stdio.h>

int main() {
    char a[101] = {0};
    short num = 0;

    scanf("%s", a);

    while (a[num] != 0)
        num++;
    
    printf("%d", num);

    return 0;
}