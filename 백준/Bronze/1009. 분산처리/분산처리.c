#include <stdio.h>
#include <math.h>

int N;
int a, b;
int data;
int num;


int main(void) {
	scanf("%d", &N);
	num = 0;
	for (int i = 0; i < N; ++i) {
		scanf("%d %d", &a, &b);

		
		if (b % 4 == 0) {
			data = pow(a, 4);
			
		}
		else {
			data = pow(a, b % 4);
			
		}

		if (data % 10 == 0) {
			num = 10;
		}
		else {
			num = data % 10;
		}
		printf("%d\n", num);


	}
}