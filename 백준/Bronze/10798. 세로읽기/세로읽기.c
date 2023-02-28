#include <stdio.h>

int main() {
    char word[5][16] = {0,};

    for (int i = 0 ; i < 5 ; i++)
        scanf("%s", word[i]);

    for (int alph = 0 ; alph < 16 ; alph++) {
        for (int wo = 0 ; wo < 5 ; wo++) {
            if (word[wo][alph] == 0)
                continue;
            printf("%c", word[wo][alph]);
        }
    }

    return 0;
}