#include <stdio.h>

int main() {
    unsigned int n = 0;
    
    scanf("%u", &n);
    
    for (int i = 0 ; i < (n / 4) ; i++)
        printf("long ");
    printf("int");

    return 0;
}