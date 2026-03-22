#include <stdio.h>

int main(void) {
	int N,X;
	int arr[100000];
	scanf("%d %d", &N, &X);
	for (int i=0; i < N; ++i) {
		scanf("%d", &arr[i]);
		if (arr[i] < X) {
			printf("%d ", arr[i]);
		}
	}

}