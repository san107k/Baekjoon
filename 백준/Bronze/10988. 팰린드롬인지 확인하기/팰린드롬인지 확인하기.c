#include <stdio.h>

int main() {
    char text[101] = {0};
    int length = 0;

    scanf("%s", text);

    for (length ; text[length] != 0 ; length++);

    length--;

    for (int i = 0 ; i < length ; i++, length--) {
        if (text[i] != text[length]) {
            printf("0");
            return 0;
        }
    }

    printf("1");

    return 0;
}