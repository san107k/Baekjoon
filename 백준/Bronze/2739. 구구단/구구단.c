#include <stdio.h>

int main(){
    int n=0;
    
    while(1){
        scanf("%d", &n);
        if (1<=n && n<=9)    break;
    }
    
    for (int i=1; i<10; i++)
        printf("%d * %d = %d\n", n, i, n*i);
    
    return 0;
}