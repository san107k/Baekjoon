#include <stdio.h>

int main(){
    int in_num=0;
    int cal_num=0, sum=0, cnt=0;
    
    scanf("%d", &in_num);
    cal_num = in_num;
    
    do {
        cnt++;
        sum = (cal_num/10) + (cal_num%10);
        cal_num = (cal_num%10)*10 + (sum%10);
    }while (in_num != cal_num);
    
    printf("%d", cnt);
    
    return 0;
}