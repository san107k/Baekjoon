#include <stdio.h>

int main() {
    char str[1000000] = {0};
    int blank = 0, cnt = 0;
    
    scanf("%[^\n]", str); //receive input until '\n' is entered

    if (str[0] != 0){
        blank++;
        while (str[cnt] != 0){
            if ((cnt == 0) && (str[cnt] == ' ')){
                cnt++;
                continue; //avoiding first blank
            }

            else if (str[cnt] == ' ')
                blank++;

            cnt++;
        }
        if (str[cnt-1] == ' ')
            blank--; //avoiding last blank
    }

    printf("%d", blank);

    return 0;
}