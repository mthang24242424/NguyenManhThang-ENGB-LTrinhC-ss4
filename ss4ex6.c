#include<stdio.h> 
int main(){
	float soDienCu, soDienMoi;
	printf("nhap so dien dau thang ");
	scanf("%f",&soDienCu);
	printf("nhap so dien cuoi thang ");
	scanf("%f",&soDienMoi);
	float soDienTieuThu = soDienMoi - soDienCu;
	float soTien; 
	if(0<=soDienTieuThu&&soDienTieuThu<50){
		soTien = soDienTieuThu*10000; 
		printf("so tien dien thang nay la %.2f ",soTien); 
	} else if(soDienTieuThu<100){
		soTien = soDienTieuThu*15000; 
		printf("so tien thang nay la %.2f",soTien); 
	} else if(soDienTieuThu<150) {
		soTien = soDienTieuThu*20000;
		printf("so tien thang nay la %.2f",soTien); 
	}else if(soDienTieuThu<200){
		soTien = soDienTieuThu*25000;
				printf("so tien thang nay la %.2f",soTien); 
 
	} else{
		soTien = soDienTieuThu*30000;
				printf("so tien thang nay la %.2f",soTien); 
 
	} 
	return 0; 
}  
