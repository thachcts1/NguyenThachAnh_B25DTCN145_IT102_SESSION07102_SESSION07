
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap so nguyen duong!\n");
        return 1;
    }

    printf("Cac cap (a, b) thoa man a^3 + b^3 = %d la:\n", n);
    int A = 0,a = 0,b = 0 ;
	
     for ( a; a * a * a <= n; a++) {
        for ( b ; b * b * b <= n; b++) {
            if (a * a * a + b * b * b == n) {
                printf("(%d, %d)\n", a, b);
                A = 1;
            }
        }
    }

    if (!A)
        printf("Khong co cap (a, b) nao thoa man.\n");

    return 0;
}

