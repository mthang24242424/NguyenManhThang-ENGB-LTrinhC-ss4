#include<stdio.h>
int main(){
	int month;
	printf("moi ban nhap so thang can kiem tra ");
	scanf("%d",&month);
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: 
		printf("thang nay co 31 ngay");
		break; 
		case 2: 
		printf("thang nay co 28 hoac 29 ngay");
		break;
		case 4:
		case 6:
		case 9:
		case 11: 
		printf("thang nay co 30 ngay");
		break;
		default:
		printf("ko co thang nay"); 
		break; 
	} 
	
	return 0; 
} 
