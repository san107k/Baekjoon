#include <stdio.h>

int main() {
    char str[100] = {0};
    int alph[26] = {0};
    for (int initialization_alph = 0 ; initialization_alph < 26 ; initialization_alph++)
        alph[initialization_alph] = -1;

    scanf("%s", str);

    for (int cnt = 0 ; str[cnt] != 0 ; cnt++)
        if (alph[((int)str[cnt] - 97)] == -1)
            alph[((int)str[cnt] - 97)] = cnt; //(int)'a' == 97

    for (int printing = 0 ; printing < 26 ; printing++)
        printf("%d ", alph[printing]);
    
    return 0;
}