#include <stdio.h>

int main() {
    unsigned int array[9];
    unsigned int max = 0, th = 0;
    
    for (int i = 0; i < 9; i++)
        scanf("%d", &array[i]);
        
    for (int i = 0; i < 9; i++)
        if (max < array[i]){
            max = array[i];
            th = (i + 1);
        }
    
    printf("%d\n%d", max, th);
    
    return 0;
}