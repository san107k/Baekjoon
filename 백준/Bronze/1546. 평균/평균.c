#include <stdio.h>

int main() {
    int subject[1000], num = 0;
    unsigned int max = 0;
    float fake_sum = 0;
    
    scanf("%d", &num);
    for (int score = 0; score < num; score++)
        scanf("%d", &subject[score]);
        
    for (int check = 0; check < num; check++)
        if (max < subject[check])
            max = subject[check];
            
    for (int fake = 0; fake < num; fake++)
        fake_sum += ((float)subject[fake]* 100 / max);
        
    printf("%f", (fake_sum / num));
    
    return 0;
}