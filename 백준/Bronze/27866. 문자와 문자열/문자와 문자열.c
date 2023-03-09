#include <stdio.h>

int main() {
    char text[1001] = {0, };
    int num = 0;

    scanf("%s", text);
    scanf("%d", &num);

    num--;
    
    printf("%c", text[num]);

    return 0;
}