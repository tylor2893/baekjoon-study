int main(void) {
	unsigned int num;
	scanf("%u", &num);
	if ((num >= 90) && (num <= 100)) {
		printf("A");
	}
	else if ((num >= 80) && (num <= 89)) {
		printf("B");
	}
	else if ((num >= 70) && (num <= 79)) {
		printf("C");
	}
	else if ((num >= 60) && (num <= 69)) {
		printf("D");
	}
	else{
		printf("F");
	}
}