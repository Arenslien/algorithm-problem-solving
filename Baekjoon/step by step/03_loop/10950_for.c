#include <stdio.h>

int main(void) {
	int a, b, n;
	int result[] = {};
	
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d", a+b);
	}
	
	return 0;
}
