#include<stdio.h> 
int main(){
	int firstNum,secondNum,thirdNum,i;
	printf("nhap so thu nhat ");
	scanf("%d",&firstNum);
	printf("nhap so thu hai ");
	scanf("%d",&secondNum);
	printf("nhap so thu ba ");
	scanf("%d",&thirdNum);
	if (firstNum>secondNum){
		i = firstNum; 
		firstNum = secondNum; 
		secondNum = i; 
	} 
	if (firstNum>thirdNum){
		i = firstNum;
		firstNum =  thirdNum;
		thirdNum = i; 
	} 
	if (secondNum>thirdNum){
		i = secondNum;
		secondNum =  thirdNum;
		thirdNum = i; 
	} 
	printf("%d %d %d",firstNum,secondNum,thirdNum); 
	return 0; 
} 
