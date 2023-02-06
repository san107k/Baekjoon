#include <stdio.h>

int main() {
    char str[1000000] = {0};
    int alph[26], max_cnt = 0, max_alph = 0, same = 0;
    for (int initialization_alph = 0 ; initialization_alph < 26 ; initialization_alph++)
        alph[initialization_alph] = 0;

    scanf("%s", str);

    for (int i = 0 ; str[i] != 0 ; i++){
        if ((65 <= (int)str[i]) && ((int)str[i] <= 90)) //(int)'A' == 65 && (int)'Z' == 90
            alph[((int)str[i] - 65)]++;

        else if ((97 <= (int)str[i]) && ((int)str[i] <= 122)) //(int)'a'== 97 && (int)'z' == 122
            alph[((int)str[i] - 97)]++;
    }
    
    for (int cnt = 0 ; cnt < 26 ; cnt++){
        if (max_cnt < alph[cnt]){
            max_cnt = alph[cnt];
            max_alph = cnt;
            same = 0;
        }
        else if (max_cnt == alph[cnt])
            same = 1;
    }

    if (same == 0)
        printf("%c", (char)(max_alph + 65));
        
    else
        printf("?");

    return 0;
}