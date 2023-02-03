#include <stdio.h>

int main() {
    int num = 0, cnt = 0;
    int rest[42];
    for (int put_zero = 0; put_zero < 42; put_zero++)
        rest[put_zero] = 0;
    
    for (int inputs = 0; inputs < 42; inputs++){
        scanf("%d", &num);
        rest[num%42] = 1;
    }
    
    for (int check = 0; check < 42; check++)
        if (rest[check] == 1)
            cnt++;
            
    printf("%d", cnt);
    
    return 0;
}