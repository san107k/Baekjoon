#include <stdio.h>

int main(){
    int test_data = 0;
    int height = 0, width = 0, num = 0, room = 0;

    scanf("%d", &test_data);

    for (int i = 0; i < test_data; i++){
        scanf("%d %d %d", &height, &width, &num);

        if (num % height == 0)
            room = (height * 100) + (num / height);

        else
            room = ((num % height) * 100) + ((num / height) + 1);
        
        printf("%d\n", room);
    }

    return 0;
}