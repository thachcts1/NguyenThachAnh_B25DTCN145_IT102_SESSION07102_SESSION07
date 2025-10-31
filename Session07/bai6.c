
#include<stdio.h> 
	int main () {
		int number ,so_dao_nguoc;
		printf ("nhap so nguyen ");
		scanf ("%d",& number  ) ;
		  while (number > 0) {
        int digit = number % 10;           
        so_dao_nguoc =so_dao_nguoc* 10 + digit; 
        number = number/ 10;                   
    }
    printf("So dao nguoc: %d",  so_dao_nguoc);

		
		
		
		return 0;
		 
	}

