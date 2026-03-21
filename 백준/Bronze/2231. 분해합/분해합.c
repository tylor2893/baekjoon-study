#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N;
	int sum;	//분해합 변수
	int temp;	//각 자리수 저장할 변수
	int num;	//생성자 변수
	(void)scanf("%d", &N);
	for (int i = 0; i < N + 1; ++i) {
		sum = i;
		temp = i;
		num = i;
		while (temp > 0) {
			sum+=temp % 10;
			temp = temp / 10;
		}
		if (sum == N) {
			break;
		}
		if (sum != N) {
			num = 0;
		}
		
		
	}
	printf("%d", num);
}