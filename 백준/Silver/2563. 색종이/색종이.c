#include <stdio.h>

int main() {
    int times = 0;
    int x = 0, y = 0;
    int square[100][100];
    int cnt = 0;

    for (int initialization = 0 ; initialization < 100 ; initialization++)
        for (int ini = 0 ; ini < 100 ; ini++)
            square[initialization][ini] = 0;

    scanf("%d", &times);

    for (int i = 0 ; i < times ; i++) {
        scanf("%d %d", &x, &y);

        for (int width = x ; width < (x + 10) ; width++) {
            if (width >= 100)
                break;

            for (int height = y ; height < (y + 10) ; height++) {
                if (height >= 100)
                    break;
                
                square[width][height] = 1;
            }
        }
    }

    for (int calculation = 0 ; calculation < 100 ; calculation++)
        for (int cal = 0 ; cal < 100 ; cal++)
            if (square[calculation][cal] == 1)
                cnt++;

    printf("%d", cnt);

    return 0;
}