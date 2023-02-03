#include <stdio.h>

int main() {
    int total_times = 0;
    int student_num = 0, score[1000], above_avr = 0;
    float avr = 0.0;
    
    scanf("%d", &total_times);
    
    for (int times = 0; times < total_times; times++){
        scanf("%d", &student_num);
        for (int i = 0; i < student_num; i++)
            scanf("%d", &score[i]);
        
        for (int cal = 0; cal < student_num; cal++)
            avr += (float)score[cal];
            
        avr /= student_num;
        
        for (int check = 0; check < student_num; check++)
            if (score[check] > avr)
                above_avr++;
                
        printf("%.3f\%\n", ((float)above_avr / student_num * 100));
        
        above_avr = 0, avr = 0.0;
    }
    
    return 0;
}