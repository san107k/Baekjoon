#include <stdio.h>

int main() {
    int times = 0, repeat = 0;
    char str[1000] = {0};
    
    scanf("%d", &times);

    for (int t = 0 ; t < times ; t++){
        scanf("%d %s", &repeat, str);

        for (int cnt = 0 ; str[cnt] != 0 ; cnt++)
            for (int i = 0 ; i < repeat ; i++)
                printf("%c", str[cnt]);
        printf("\n");
    }

    return 0;
}