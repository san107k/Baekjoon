#include <stdio.h>

int main(){
    int x=0, y=0;
    
    while(1){
        scanf("%d", &x);
        scanf("%d", &y);
        if (-1000<=x && x<=1000 && x!=0){
            if (-1000<=y && y<=1000 && y!=0)
                break;
        }
    }
    
    if (x>0){
        if (y>0)    printf("1");
        if (y<0)    printf("4");
    }
    else{
        if (y>0)    printf("2");
        if (y<0)    printf("3");
    }
    
    return 0;
}