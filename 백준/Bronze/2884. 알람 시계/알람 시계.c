#include <stdio.h>

int main(){
    int H=0, M=0;
    
    while(1){
        scanf("%d", &H);
        scanf("%d", &M);
        if (0<=H && H<=23){
            if (0<= M && M<=59)
                break;
        }
    }
    
    M -= 45;
    if (M<0){
        M += 60;
        H--;
        if (H<0)    H += 24;
    }
    
    printf("%d %d", H, M);
    
    return 0;
}