#include<stdio.h>
int main(){
			//B1: khoi bao so nguyen duong;
		int number, charter_number, reverse = 0,copyNumber;
		
		printf("nhap so nguyen : ");
		scanf("%d", &number);
		copyNumber = number;
		//B3: so dao nguoc ban dau 
		while(number != 0){
			charter_number = number % 10;
			reverse = reverse * 10 + charter_number;
			number = number / 10;
		}	
		// b4 : so sanh so dao dao nguoc voi so nguyen vua nhap;
		if(copyNumber == reverse){
			printf("day la so doi xung");
		}else{
			printf("day khong phai so doi xung");
		}
			
			
	return 0;
}
