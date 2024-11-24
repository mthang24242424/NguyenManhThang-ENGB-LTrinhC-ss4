#include<stdio.h> 
int main(){ 
	int firstNum,secondNum,thirdNum,i;
	printf("nhap so thu nhat ");
	scanf("%d",&firstNum);
	printf("nhap so thu hai ");
	scanf("%d",&secondNum);
	printf("nhap so thu ba ");
	scanf("%d",&thirdNum);
	// ktra neu so thu nhat > so thu 2 thi doi vi tri cho nhau qua i 
	if (firstNum>secondNum){
		i = firstNum; 
		firstNum = secondNum; 
		secondNum = i; 
	} 
	// ktra neu so thu nhat > so thu 3 thi doi vi tri cho nhau qua i 
	if (firstNum>thirdNum){
		i = firstNum;
		firstNum =  thirdNum;
		thirdNum = i; 
	} 
	// ktra neu so thu 2 > so thu 3 thi doi vi tri cho nhau qua i 
	if (secondNum>thirdNum){
		i = secondNum;
		secondNum =  thirdNum;
		thirdNum = i; 
	} 
	// in kqa theo thu tu so t1, t2, t3 sau khi da xep xong 
	printf("%d %d %d",firstNum,secondNum,thirdNum); 
	return 0; 
} 
