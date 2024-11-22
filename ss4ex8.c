#include<stdio.h>
int main(){
	float fisrtEdge, secondEdge, thirdEdge;
	printf("moi ban nhap do dai 3 canh cua tam giac ");
	scanf("%f%f%f",&fisrtEdge,&secondEdge,&thirdEdge);
	if(fisrtEdge+secondEdge>thirdEdge &&fisrtEdge+thirdEdge>secondEdge&&secondEdge+thirdEdge>fisrtEdge){
		printf("day la 1 tam giac"); 
	} else{
		printf("day khong la 1 tam giac"); 
	}
	return 0; 
} 
 
