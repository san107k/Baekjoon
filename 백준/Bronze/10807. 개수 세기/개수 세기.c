#include <stdio.h>

int main(){
    int n=0, num[100];
    int num_looking_for=0, cnt=0;
    
    scanf("%d", &n);
    
    for (int i=0; i<n; i++)
        scanf("%d", &num[i]);
        
    scanf("%d", &num_looking_for);
    
    for (int i=0; i<n; i++)
        if (num[i] == num_looking_for)
            cnt++;

    printf("%d", cnt);
    
    return 0;
}