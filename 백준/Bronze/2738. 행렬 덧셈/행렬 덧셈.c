#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_N (100+2)
int arr1[MAX_N][MAX_N];
int arr2[MAX_N][MAX_N];
int arr3[MAX_N][MAX_N];
int N, M;

void input() {
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			scanf("%d", &arr1[i][j]);
		}
	}
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			scanf("%d", &arr2[i][j]);
		}
	}
}


int main(void) {
	input();
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}

	
}