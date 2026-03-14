#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int arr[3] = {0};
	int num1, num2;
	int x, y, z;
	scanf("%d %d", &num1, &num2);
	arr[0] = num2 % 10;
	arr[1] = (num2 / 10) % 10;
	arr[2] = num2 / 100;
	x = arr[0] * num1;
	y = arr[1] * num1;
	z = arr[2] * num1;
	printf("%d\n%d\n%d\n%d", x, y, z, num1 * num2);
}