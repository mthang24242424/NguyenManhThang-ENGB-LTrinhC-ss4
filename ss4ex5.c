#include <stdio.h>
int main(){
	int fisrtNumber, secondNumber, thirdNumber;
	printf("moi ban nhap vao 3 so nguyen bat ki ");
	scanf("%d%d%d",&fisrtNumber,&secondNumber,&thirdNumber);
	if(thirdNumber>fisrtNumber && thirdNumber< secondNumber || thirdNumber<fisrtNumber && thirdNumber> secondNumber) {
		printf("so thu 3 nam giua 2 so "); 
	}else{
		printf("so thu 3 khong nam giua 2 so"); 
	} 
	return 0; 
} 
