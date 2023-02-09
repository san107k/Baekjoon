#include <stdio.h>

int main(){
    int num = 0, layer = 0;

    scanf("%d", &num);

    num--;

    for (layer = 1 ; num > 0 ; layer++)
        num -= (layer * 6);

    printf("%d", layer);

    return 0;
}