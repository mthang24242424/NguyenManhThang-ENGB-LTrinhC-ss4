#include <stdio.h>
int main() {
    int number;
    printf("moi ban nhap vao so nguyen bat ki ");
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0) {
        printf("so nay chia het cho ca 3 va 5\n", number);
    } else if (number % 3 == 0) {
        printf("so nay chia het cho 3\n", number);
    } else if (number % 5 == 0) {
        printf("so nay chia het cho 5\n", number);
    } else {
    	 printf("so nay ko chia het cho 3 hay 5", number);
	}
       return 0;
}

