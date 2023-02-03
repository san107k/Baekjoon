#include <stdio.h>

int main() {
    int times = 0, cnt = 0, score = 0;
    char ques[80];
    
    scanf("%d", &times);
    for (int i = 0; i < times; i++){
        scanf("%s", ques);
        for (int num = 0; ques[num] != NULL; num++){
            if (ques[num] == 'O'){
                cnt++;
                score += cnt;
            }
            else
                cnt = 0;
        }
        printf("%d\n", score);
        cnt = 0, score = 0;
    }
    
    return 0;
}