#include<stdio.h>
int main(){
	int number;
	printf("moi ban nhap vao so nguyen bat ki ");
	scanf("%d",&number);
	if(number>0){
		printf("day la so duong"); 
	} else if(number==0){
		printf("day ko phai so duong hay am"); 
	} else{
		printf("day la so am"); 
	} 
return 0; 
} 

