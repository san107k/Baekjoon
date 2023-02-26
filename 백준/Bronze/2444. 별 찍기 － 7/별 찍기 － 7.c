#include <stdio.h>

int main() {
    int layer = 0;
    
    scanf("%d", &layer);

    for (int upper = 0 ; upper < layer ; upper++) {
        for (int space = 0 ; space < (layer - upper - 1) ; space++)
            printf(" ");
        for (int star = 0 ; star < ((upper * 2) + 1) ; star++)
            printf("*");
        printf("\n");
    }

    for (int lower = --layer; lower > 0 ; lower--) {
        for (int space = 0 ; space < (layer - lower + 1) ; space++)
            printf(" ");
        for (int star = 0 ; star < ((lower * 2) - 1) ; star++)
            printf("*");
        printf("\n");
    }

    return 0;
}