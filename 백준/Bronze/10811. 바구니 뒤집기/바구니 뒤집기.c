#include <stdio.h>
int N, M;
int i, j;

int arr[102];
int temp;
int main(void) {
	
	scanf("%d %d", &N, &M);
	for (int n = 0; n < N; ++n) {
		arr[n] = n + 1;
	}
	for (int m = 0; m < M; ++m) {
		scanf("%d %d", &i, &j);
		int left = i - 1;  // 시작 인덱스
		int right = j - 1; // 끝 인덱스
		while (left < right) {
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
		
		
	}
	for (int k = 0; k < N; ++k) {
		printf("%d ", arr[k]);
	}
}
