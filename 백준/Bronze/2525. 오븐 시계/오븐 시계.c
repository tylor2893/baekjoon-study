#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int H, M, time; //각각 시, 분, 요리하는데 필요한 시간
	(void)scanf("%d %d", &H, &M);
	(void)scanf("%d", &time);
	if (time >= 60) { // 필요한 시간이 1시간을 넘어갈때
		M = M + time % 60;
		H = H + time / 60;
		if (M >= 60) {
			H = H + M / 60;
			M = M % 60;
		}
		if (H >= 24) {
			H -=24;
		}
		

	}
	else if (time < 60) {
		M = M + time;
		if (M >= 60) {
			H = H + M / 60;
			M = M % 60;
		}
		if (H >= 24) {
			H -= 24;
		}
	}
	printf("%d %d", H, M);
	
}