#include<stdio.h>
int main(){
	int day,month,year;
	int HopLe = 1;
	int namNhuan; 
	printf("nhap nam ");
	scanf("%d",&year);
	printf("nhap thang ");
	scanf("%d",&month);
	printf("nhap ngay ");
	scanf("%d",&day);
	 if(year<0){
	 	HopLe = 0; 
	 } else if(year%4==0){
	 	namNhuan = 1; 
	 } else{
	 	namNhuan = 0; 
	 } 
	 if(month<0||month>12){
	 	HopLe = 0; 
	 } 
	 if(HopLe==1){
	 	switch (month){
	 		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			 if(day<1||day>31){
			 	HopLe = 0;
				 break; 
			 } 
			case 4: case 6: case 9: case 11:
			 if(day<1||day>30){
			 	HopLe = 0;
				 break; 
			 } 
			case 2: 
			if(namNhuan == 1){
				if(day<1||day>29){
					HopLe = 0;
					break; 
				} 
			
			} else if(namNhuan == 0){
				if(day<1||day>28){
					HopLe = 0;
					break; 
				} 
			} 
		
		 } 
	 }

if(HopLe == 1){
	printf("ngay thang nam hop le"); 
} else{
	printf("ko hop le"); 
} 
	 
 

 return 0; 
}
