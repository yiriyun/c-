#include <stdio.h>

int main () {

	int a;
	scanf("%d", &a);

	double b = a * (1.033) * (1.033) * (1.033);
	printf("%lf", b);

	return 0;
}