#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int N;		//시험 본 과목 개수	
	double score=0;
	double arr[1000] = { 0 }; //점수 저장 배열
	double max=0; 
	double sum = 0;
	double avg = 0;

	(void)scanf("%d", &N);
	for (int i = 0; i < N; ++i) {
		(void)scanf("%lf",&arr[i]);
	}
	//최대값 찾기
	max = arr[0];
	for (int i=0; i < N; ++i) {
		if (max < arr[i]) {
			max = arr[i];
		}
		
	}
	//printf("%lf\n", max);
	for (int i=0; i < N; ++i) {
		arr[i] = (arr[i] / max) * 100;
		sum = sum + arr[i];
		
	}
	//printf("%lf\n", sum);
	avg = sum / (double)N;

	printf("%.2lf", avg);
	


}