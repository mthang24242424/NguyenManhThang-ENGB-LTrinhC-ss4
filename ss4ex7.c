#include<stdio.h>
int main(){
	int years;
	printf("nhap nam ban muon kiem tra ");
	scanf("%d",&years) ;
	if(years % 4 == 0){
		printf("day la nam nhuan ");
	}else{
		printf("day la nam ko nhuan"); 
	} 
	return 0; 
} 
