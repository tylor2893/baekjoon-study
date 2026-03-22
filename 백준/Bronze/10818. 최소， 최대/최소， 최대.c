#include <stdio.h>
#define MAX_N (1000000+2)
int arr[MAX_N];
int main(void) {
	int N;
	
	int min,max;
	min = 0;
	max = 0;

	scanf("%d", &N);
	for (int i = 0; i < N; ++i) {

		scanf("%d", &arr[i]);
	}
	min = arr[0];
	max = arr[0];
	for(int i=0;i<N;++i){

		if (arr[i]<min) {
			min = arr[i];
		}
		else if (arr[i] > max) {
			max = arr[i];
		}

	}
	printf("%d %d", min, max);

}