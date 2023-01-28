#include <stdio.h>

int main(){
    int a=0, b=0, c=0;
    int price=0;
    
    while (1){
        scanf("%d %d %d", &a, &b, &c);
        if (1<=a && a<=6){
            if (1<=b && b<=6){
                if (1<=c && c<=6)
                    break;
            }
        }
    }
    
    if (a==b && b==c)
        price = (10000 + (a*1000));
    else if (a==b)
        price = (1000 + (a*100));
    else if (b==c)
        price = (1000 + (b*100));
    else if (c==a)
        price = (1000 + (c*100));
    else{
        if (a>b){
            if (a>c)    price = (a*100);
            else    price = (c*100);
        }
        else{
            if (b>c)    price = (b*100);
            else    price = (c*100);
        }
    }
    
    printf("%d", price);
    
    return 0;
}