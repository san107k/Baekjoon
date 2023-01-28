#include <stdio.h>

int main(){
    int year=0;
    
    while (1){
        scanf("%d", &year);
        if (1000<=year && year<=3000)
            break;
    }
    
    printf("%d", year-543);
    
    return 0;
}