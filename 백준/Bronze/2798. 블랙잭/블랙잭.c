#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N_MAX (100+2)
int N, M;
int arr[N_MAX];

void input() {
	scanf("%d %d", &N, &M);
	for(int i=0;i<N;++i){
		scanf("%d", &arr[i]);
	}
}
void blackjack(void) {
	int SUM;
	int MAX=0;	//SUM과 비교하며 갱신할 변수
	//3중for문을 돌며 모든 경우의 수 탐색
	for (int i = 0; i <=N - 3; i++) {
		for (int j = i + 1; j <= N - 2; j++) {
			for (int k = j + 1; k <= N-1 ; k++) {
				SUM = arr[i] + arr[j] + arr[k];
				if (SUM<=M && SUM > MAX) { // 지금까지 더한값이 최댓값보다 작고 목표 점수(21)을 넘지 않았을때
					MAX = SUM; //최댓값 갱신
				}
			}
		}
	}
	printf("%d", MAX);
}

int main(void) {
	input();
	blackjack();

}
