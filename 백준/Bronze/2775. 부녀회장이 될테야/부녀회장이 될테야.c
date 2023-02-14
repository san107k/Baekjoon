#include <stdio.h>

int main(){
    int test_case = 0;
    int floor = 0, room = 0, resident[15][15] = {0}; // floor = floor, room[0] = room_1

    for (int initialization = 0 ; initialization < 15 ; initialization++) {
        resident[initialization][0] = 1;
        resident[0][initialization] = (initialization + 1);
    }

    scanf("%d", &test_case);

    for (int i = 0 ; i < test_case ; i++) {
        scanf("%d", &floor);
        scanf("%d", &room);
        
        for (int f = 1 ; f <= floor ; f++)
            for (int r = 1 ; r < room ; r++)
                resident[f][r] = resident[f][r-1] + resident[f-1][r];
        
        printf("%d\n", resident[floor][room - 1]);
    }

    return 0;
}