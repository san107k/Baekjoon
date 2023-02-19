#include <stdio.h>

int main() {
    int row = 0, column = 0;
    int a[101][101] = {0}, b[101][101] = {0};

    scanf ("%d %d", &row, &column);

    for (int r = 0 ; r < row ; r++)
        for (int c = 0 ; c < column ; c++)
            scanf("%d", &a[r][c]);
    
    for (int r = 0 ; r < row ; r++)
        for (int c = 0 ; c < column ; c++)
            scanf("%d", &b[r][c]);

    for (int r = 0 ; r < row ; r++) {
        for (int c = 0 ; c < column ; c++) {
            a[r][c] += b[r][c];
            printf("%d ", a[r][c]);
        }
        printf("\n");
    }

    return 0;
}