#include <stdio.h>

int main() {
    int until = 0, copy = 0, cnt = 0;
    int diff[2] = {0};

    scanf("%d", &until);

    for (int num = until ; num > 0 ; num--){
        if (num < 100)
            cnt++;
        
        else if (num < 1000){
            copy = num;
            for (int cal = 0 ; copy > 9 ; cal++){
                diff[cal] = (copy % 10) - ((copy / 10) % 10);
                copy /= 10;
            }
            if (diff[0] == diff[1])
                cnt++;
        }
        
        //no calculation for num == 1000;
    }

    printf("%d\n", cnt);

    return 0;
}