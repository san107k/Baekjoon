#include <stdio.h>

int main() {
    int num = 0, array[1000000];
    int min = 1000000, max = -1000000;
    
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
        scanf("%d", &array[i]);
        
    for (int i = 0; i < num; i++){
        if (min > array[i])
            min = array[i];
        if (max < array[i])
            max = array[i];
    }
    
    printf("%d %d", min, max);
    
    return 0;
}