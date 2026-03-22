#include <stdio.h>

int N, M;
int i, j;
int temp;
int arr[100 + 2];
int main(void) {
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; ++i) {
		arr[i]=i+1;
	}
	for (int k = 0; k < M; ++k) {
		scanf("%d %d", &i, &j);
		temp = arr[i-1];
		arr[i-1] = arr[j-1];
		arr[j-1] = temp;
	}
	for (int i = 0; i < N; ++i) {
		printf("%d ", arr[i]);
	}
}