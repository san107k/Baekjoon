#include <stdio.h>

int main(){
    int A=0, B=0, C=0;
    
    while (1){
        scanf("%d %d", &A, &B);
        scanf("%d", &C);
        if (0<=A && A<=23){
            if (0<=B && B<=59){
                if (0<=C && C<=1000)
                    break;
            }
        }
    }
    
    A += (C/60);
    B += (C%60);
    while (B>59){
        A++;
        B -= 60;
    }
    while (A>23){
        A -= 24;
    }
    
    printf("%d %d", A, B);
    
    return 0;
}