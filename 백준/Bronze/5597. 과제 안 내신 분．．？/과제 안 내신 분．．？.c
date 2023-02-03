#include <stdio.h>

int main() {
    int student[30], num = 0;
    for (int i = 0; i < 30; i++)
        student[i] = 0;
    
    for (int cnt = 0; cnt < 30; cnt++){
        scanf("%d", &num);
        student[num-1] = 1;
    }
    
    for (int i = 0; i < 30; i++)
        if (student[i] == 0)
            printf("%d\n", (i + 1));
    
    return 0;
}