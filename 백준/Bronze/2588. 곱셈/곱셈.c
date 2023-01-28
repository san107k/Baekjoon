#include <stdio.h>

int main(){
    int a=0, b=0;
    int cnt=1, result=0;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    while (b!=0){
        printf("%d\n", a*(b%10));
        result += (a*(b%10)*cnt);
        b/=10;
        cnt *= 10;
    }
    printf("%d", result);
    
    return 0;
}