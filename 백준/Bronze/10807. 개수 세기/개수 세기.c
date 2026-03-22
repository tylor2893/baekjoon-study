#include <stdio.h>
#define MAX_N (100+2)
int N,v;
int cnt;
int arr[MAX_N];

void input() {
	scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &v);
}

void output() {
	for (int i = 0; i < N; ++i) {
		if (v == arr[i]) {
			++cnt;
		}
	}
	printf("%d", cnt);
}

int main(void) {
	input();
	output();
}