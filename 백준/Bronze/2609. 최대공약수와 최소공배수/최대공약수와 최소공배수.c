#include <stdio.h>

int main() {
    int num_01 = 0, num_02 = 0;
    int GCD = 0, LCM = 0;

    scanf("%d %d", &num_01, &num_02);

    for (GCD = (num_01 < num_02) ? num_01 : num_02 ; 1 ; GCD--)
        if (num_01 % GCD == 0 && num_02 % GCD == 0)
            break;

    for (LCM = (num_01 > num_02) ? num_01 : num_02 ; 1 ; LCM++)
        if (LCM % num_01 == 0 && LCM % num_02 == 0)
            break;

    printf("%d\n%d", GCD, LCM);
    
    return 0;
}