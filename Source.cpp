#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {
	short a[40];
	int n, t, s, i;
	printf("Are you readey?");
	getchar();
	srand((unsigned)time(nullptr));
	for (n = 0; n < 40; n++) {
		a[n] = n + 1;
	}
	for (n = 0; n < 40; n++) {
		t = rand() % 40;
		s = a[t];
		a[t] = a[n];
		a[n] = s;
	}
	i = 0;
	n = 0;
	while (n < 42) {
		if (n == 0 || n == 5) {
			printf("    |");
		}
		else {
			printf(" %2d |", a[i++]);
		}
		if ((++n) % 6 == 0) {
			printf("\n");
		}
	}
	return 0;
}