#include <stdio.h>

int main() {
    int time = 0;
    char text[1001] = {0};

    scanf("%d", &time);

    for (int i = 0 ; i < time ; i++) {
        scanf("%s", text);

        for (int num = 0 ; text[num] != 0 ; num++) {
            if (num == 0)
                printf("%c", text[num]);
            if (text[num + 1] == 0)
                printf("%c", text[num]);
        }

        printf("\n");
    }

    return 0;
}