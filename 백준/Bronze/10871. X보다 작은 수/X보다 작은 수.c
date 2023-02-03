#include <stdio.h>

int main() {
    int num = 0, array[10000];
    int x = 0;
    
    scanf("%d %d", &num, &x);
    
    for (int i = 0; i < num; i++)
        scanf("%d", &array[i]);
        
    for (int j = 0; j < num; j++)
        if (x > array[j])
            printf("%d ", array[j]);
    
    return 0;
}