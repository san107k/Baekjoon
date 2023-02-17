#include <stdio.h>

int main(){
    int start = 0, end = 0;
    short composite[1000002] = {0};

    scanf("%d %d", &start, &end);

    composite[1] = 1;
    for (int i = 2 ; i <= end ; i++) {
        for (int times = 2 ; (i * times) <= end ; times++){
            composite[i * times] = 1;
        }
    }

    for (int num = start; num <= end ; num++) {
        if (composite[num] == 0)
            printf("%d\n", num);
    }

    return 0;
}