#include <stdio.h>
void reduce_fraction(int *a, int *b) {
    int gcd(int a, int b) {//ищем МАКС-ОБЩ делитель
        if (b==0)
            return a;
        else
            return gcd(b, a%b);
    }
    
    int k = gcd(*a, *b);//сокращаем оби дроби на МАКС-ОБЩ делитель
    *a /=k;
    *b /=k;
}

int main() {
    int chisel=7;
    int znam=14;
    reduce_fraction(&chisel, &znam);
    printf("%d %d", chisel, znam);

    return 0;
}