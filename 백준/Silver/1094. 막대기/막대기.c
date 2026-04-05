#include <stdio.h>

int X;
int min_stick;
int count;
int sum;
int main(void) {
	scanf("%d", &X);
	sum = 64;
	count = 1;
	min_stick = 64;	
	while (sum > X) {
		min_stick /= 2;
		if (sum-min_stick >= X) {
			sum -= min_stick;
		}
		else {
			++count;
		}
		if (sum == X) {
			break;
		}
		
	}
	printf("%d", count);
	
}