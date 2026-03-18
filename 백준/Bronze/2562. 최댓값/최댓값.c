#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[9]; //자연수 저장 배열
	int max=0;
	int num = 0;
	for (int i = 0; i < 9; ++i) {
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	for (int i = 0; i < 9; ++i) {
		if (max < arr[i]) {
			max = arr[i];
			num = i+1;
		}
		else if (max == arr[0]) {
			num = 1;
		}
		
	}
	
	printf("%d\n", max);
	printf("%d", num);
}