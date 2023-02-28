#include <stdio.h>

int main() {
    char text[101] = {0};

    while (scanf("%[^\n]", text) != EOF) {
        getchar();
        printf("%s\n", text);
    }

    return 0;
}