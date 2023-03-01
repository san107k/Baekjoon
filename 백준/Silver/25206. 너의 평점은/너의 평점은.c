#include <stdio.h>

int main() {
    char subject[51] = {0,}, grade[3] = {0,};
    float hour = 0.0, aver = 0.0, cnt = 0.0;

    for (int i = 0 ; i < 20 ; i++) {
        scanf("%s", subject);
        scanf("%f", &hour);
        scanf("%s", grade);

        if (grade[0] == 'P')
            continue;

        if (grade[1] == '+') {
            switch (grade[0]) {
                case 'A':
                aver += (hour * 4.5);
                break;
                case 'B':
                aver += (hour * 3.5);
                break;
                case 'C':
                aver += (hour * 2.5);
                break;
                case 'D':
                aver += (hour * 1.5);
                break;
            }
        }

        else {
            switch (grade[0]) {
                case 'A':
                aver += (hour * 4.0);
                break;
                case 'B':
                aver += (hour * 3.0);
                break;
                case 'C':
                aver += (hour * 2.0);
                break;
                case 'D':
                aver += (hour * 1.0);
                break;
            }
        }

        cnt += hour;
    }
    
    aver /= cnt;

    printf("%f", aver);

    return 0;
}