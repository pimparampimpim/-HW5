#include <stdio.h>

int abs_arr(int arr[], int n) {
    int k=0;

    for (int i=0;i<n;i++) {//если число меньше 0 выводится модуль
        if (*arr<0) {
            *arr=-*arr;
            k++;
        }
        arr++;//берем следующий элемент из массива
    }
    return k;
}

int main () {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    int k = abs_arr(arr, n);
    printf("%d ", k);
    for (int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}