#include <stdio.h>
int main (){   
    int number,charter_number, reverse = 0 , copy_number;
    printf("Nhap so nguyen :");
    scanf("%d", &number);
    copy_number = number;

    while(number != 0){
        charter_number = number % 10;
        reverse = reverse * 10 + charter_number;
        number = number / 10; 
    }
    if(copy_number == reverse) {
        printf("day la so doi xung");
    } else {
        printf("day khong phai là so doi xung");
    }

    return 0;
}
