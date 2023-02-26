#include <stdio.h>

int main() {
    int num[9][9] = {0};
    int max = 0, row = 0, column = 0;
   
    for (int r = 0 ; r < 9 ; r++) {
        for (int c = 0 ; c < 9 ; c++) {
            scanf("%d", &num[r][c]);
           
            if (max < num[r][c]) {
                max = num[r][c];
                row = r;
                column = c;
            }
        }
    }

    printf("%d\n%d %d", max, (row + 1), (column + 1));
}