#include <stdio.h>

int main(){
    int year=0;
    
    while(1){
        scanf("%d", &year);
        if (1<=year && year<=4000)
            break;
    }
    
    if ((year%4==0 && year%100!=0) || year%400==0)
        printf("1");
    else
        printf("0");
    
    return 0;
}