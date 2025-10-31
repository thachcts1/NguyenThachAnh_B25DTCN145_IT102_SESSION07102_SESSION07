
#include <stdio.h>
#include <math.h>

int main() {
    int n, tam, sochuso = 0;
    int tong = 0;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Gia tri khong hop le\n");
        return 0;
    }

    tam = n; 
 
    int m = n;
    while (m != 0) {
        sochuso++;
        m /= 10;
    }
    m = n;
    while (m != 0) {
        int chuSo = m % 10;
        tong += pow(chuSo, sochuso);
        m /= 10;
    }

    if (tong == tam)
        printf("%d la so Armstrong\n", n);
    else
        printf("%d khong phai la so Armstrong\n", n);

    return 0;
}



