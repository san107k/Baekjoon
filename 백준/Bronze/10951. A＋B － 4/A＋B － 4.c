//EOF(End Of File)
//UNIX -> Ctrl+D
//windows -> Ctrl+Z Enter

#include <stdio.h>

int main(){
    int a=0, b=0;
    
    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d\n", a+b);
    
    return 0;
}