#include <stdio.h>
#define N_MAX (30+3)
int num;
int arr[N_MAX];
int main(void) {
	for (int i = 0; i < 28; ++i) {
		scanf("%d", &num);
		arr[num-1] = 1;

	}
	for (int i = 0; i < 30; ++i) {
		if (arr[i] != 1) {
			printf("%d\n", i+1);
		}
	}
}
