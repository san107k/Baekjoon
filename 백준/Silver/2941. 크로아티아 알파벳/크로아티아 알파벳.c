#include <stdio.h>

int main() {
    char croatian[101] = {0};
    int cnt = 0;

    scanf("%s", croatian);

    for (int i = 0 ; croatian[i] != 0 ; i++){
        if (croatian[i] == 'c'){
            if ((croatian[i+1] == '=') || (croatian[i+1] == '-')){
                cnt++;
                i++;
            }
            else
                cnt++;
        }
        else if (croatian[i] == 'd'){
            if (croatian[i+1] == '-'){
                cnt++;
                i++;
            }
            else if ((croatian[i+1] == 'z') && (croatian[i+2] == '=')){
                cnt++;
                i += 2;
            }
            else
                cnt++;
        }
        else if ((croatian[i] == 'l') && (croatian[i+1] == 'j')){
            cnt++;
            i++;
        }
        else if ((croatian[i] == 'n') && (croatian[i+1] == 'j')){
            cnt++;
            i++;
        }
        else if ((croatian[i] == 's') && (croatian[i+1] == '=')){
            cnt++;
            i++;
        }
        else if ((croatian[i] == 'z') && (croatian[i+1] == '=')){
            cnt++;
            i++;
        }
        else
            cnt++;
    }

    printf("%d", cnt);

    return 0;
}