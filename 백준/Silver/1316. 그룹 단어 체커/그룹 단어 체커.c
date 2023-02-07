#include <stdio.h>

int main(){
    int input_num = 0, group_word = 0, check = 0;
    char input_word[101] = {0};
    int used_alph[26] = {0};

    scanf("%d", &input_num);

    for (int n = 0 ; n < input_num ; n++){
        for (int initialization_alph = 0 ; initialization_alph <26 ; initialization_alph++)
            used_alph[initialization_alph] = 0;

        scanf("%s", input_word);
        check = 1;

        for (int i = 0 ; input_word[i] != 0 ; i++){
            used_alph[(int)input_word[i] - 97]++; // (int)'a' == 97 && (int)'z' == 122

            if (used_alph[(int)input_word[i] - 97] > 1){
                if (input_word[i] != input_word[i-1]){
                    check = 0;
                    break;
                }
            }
        }

        if (check == 1)
            group_word++;

        else
            check = 1;
    }
    
    printf("%d", group_word);

    return 0;
}