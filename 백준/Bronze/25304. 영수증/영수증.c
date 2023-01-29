#include <stdio.h>

int main(){
    int x=0, n=0, a=0, b=0;
    int price=0;
    
    scanf("%d", &x); //written price
    scanf("%d", &n); //number of item
    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        price += (a*b);
    }
    
    if(x==price)    printf("Yes");
    else    printf("No");
    
    return 0;
}