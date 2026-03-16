#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int H;
	int M;

	scanf("%d %d", &H, &M);
	if (M >= 45) {
		M-=45;
	}
	else if ((H>0) &&(M <= 45)) {
		H--;
		M = M + 60 - 45;
	}
	else if ((H == 0)&&(M<=45)) {
		H = 23;
		M = M + 60 - 45;
	}
	printf("%d %d", H, M);
	
}