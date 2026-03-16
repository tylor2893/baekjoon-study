#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1;
	int num2;
	int num3;
	int Big; //가장 큰 수
	int price;//상금
	scanf("%d %d %d", &num1, &num2, &num3);
	if ((num1 == num2) && (num2 == num3) && (num1 == num3)) {
		price = 10000 + (num1 * 1000);
	}
	else if ((num1 == num2) || (num2 == num3) || (num1 == num3)) {
		if (num1 == num2) {
			price = 1000 + (num1 * 100);
		}
		else if (num1 == num3) {
			price = 1000 + (num1 * 100);
		}
		else if (num2 == num3) {
			price = 1000 + (num2 * 100);
		}
		
	}

	else if ((num1 != num2)&& (num2!= num3)&& (num1 != num3)) {
		if ((num1 > num2) && (num1 > num3)) {
			Big = num1;
			price = Big * 100;
		}
		else if ((num2 > num3) && (num2 > num1)) {
			Big = num2;
			price = Big * 100;
		}
		else {
			Big = num3;
			price = Big * 100;
		}
	}
	printf("%d",price);
}