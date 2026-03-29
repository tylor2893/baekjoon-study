#include <stdio.h>

#define N_MAX (100)

int arr[N_MAX][N_MAX];
int N;
int x, y;
int cnt;
void solution() {
	scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		scanf("%d %d", &x, &y);
 		for (int j=0; j<10; ++j) {
			for (int k=0; k< 10; ++k) {
				if (arr[N_MAX - (j + y)][k + x] == 0) {
					arr[N_MAX - (j + y)][k + x] = 1;
					++cnt;
				}	
			}
		}
	}
	printf("%d", cnt);
	
}

int main(void) {
	solution();
}