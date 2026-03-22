#include <stdio.h>

int arr[42]; //나머지 저장 배열 0~42
int num;
int cnt;
int main(void) {
	for (int i = 0; i < 10; ++i) {
		scanf("%d", &num);
		arr[num % 42] += 1;
	}
	for (int j = 0; j < 42; ++j) {
		if (arr[j] != 0) {
			++cnt;
		}
	}
	printf("%d", cnt);
}