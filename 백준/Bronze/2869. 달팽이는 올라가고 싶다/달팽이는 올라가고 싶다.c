#include <stdio.h>

int main(){
    int climb = 0, fall = 0, height = 0;
    int day = 0;

    scanf("%d %d %d", &climb, &fall, &height);

    day = ((height - fall) / (climb - fall));
    if (((height - fall) % (climb - fall)) != 0)
        day++;

    printf("%d", day);

    return 0;
}