#include <stdio.h>

int main() {
    unsigned int n = 0;
    
    scanf("%u", &n);

    // if ((n % 4) == 0)
    //     printf("long ");
    for (int i = 0 ; i < (n / 4) ; i++)
        printf("long ");
    printf("int");

    return 0;
}