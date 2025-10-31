#include <stdio.h>

int main() {
    int n, x, dem = 0, tam;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    printf("Nhap chu so x (0-9): ");
    scanf("%d", &x);

    if (x < 0 && x > 9) {
        printf("Chu so x khong hop le!\n");
        return 0;
    }

    if (n < 0) {
        n = -n; 
    }

    tam = n; 

    if (n == 0 && x == 0) {
        dem = 1; 
    } else {
        while (n != 0) {
            int chuso = n % 10; 
            if (chuso == x)
                dem++;
            n = n / 10; 
        }
    }

    printf("Chu so %d xuat hien %d lan trong so %d\n", x, dem, tam);

    return 0;
}

