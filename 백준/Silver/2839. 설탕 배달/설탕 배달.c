#include <stdio.h>

int main(){
    int kg = 0, five = 0, three = 0;

    scanf("%d", &kg);

    five = (kg / 5);

    while (1) {
        for (three = 0 ; kg >= (five * 5) + (three * 3) ; three++) {
            if (kg == (five * 5) + (three * 3)){
                printf("%d", (five + three));
                return 0;
            }
        }

        five--;
        if (five < 0){
            printf("%d", -1);
            return 0;
        }
    }

    return 0;
}