
#include <stdio.h>
#include <math.h>
int N(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0; 
    }
    return 1;
}

int main() {
    int a, b;

    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    printf("Cac so nguyen to trong khoang [%d, %d] la:\n", a, b);

    for (int i = a; i <= b; i++) {
        if (N(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}

