#include <stdio.h>

struct Move
{
	int x;
	int y;
};

struct Move getFinishPoint(struct Move arr[], int n) {
    struct Move finalPos = {0, 0};
    for (int i=0;i<n;i++)
    {
        finalPos.x +=arr[i].x;//берем иксы
        finalPos.y +=arr[i].y;//берем игрики
    }
    return finalPos;
}

int main() {
    struct Move arr[]= {
        {45,0},
        {36,9},
        {76,1},
        {80,94},
        {61,-8},
        {9,0},
    };
    printf("%d %d", getFinishPoint(arr, 6).x, getFinishPoint(arr, 6).y);
}