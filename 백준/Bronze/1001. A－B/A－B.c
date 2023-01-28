#include <stdio.h>

int main(){
    int a, b;
    
    while (1){
        scanf("%d %d", &a, &b);
        if (a>0 && b>0 && a<10 && b<10)
            break;
    }
    printf("%d", a-b);
    
    return 0;
}