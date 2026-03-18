#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N;
	int A;
	int B;

	int arr[1000] = {0};
	scanf("%d", &N);

	for (int i = 0; i < N; ++i) {
		scanf("%d %d", &A, &B);
		arr[i] = A + B;
	}
	for (int i = 0; i < N; ++i) {
		printf("%d\n", arr[i]);
	}
	
	return 0;
}