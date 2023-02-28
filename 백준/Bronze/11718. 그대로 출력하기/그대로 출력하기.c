#include <stdio.h>

int main() {
    char text[101] = {0,};

    while (scanf("%[^\n]s", text) != EOF) {
        getchar();
        printf("%s\n", text);
    }

    return 0;
}