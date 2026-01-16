#include <stdio.h>

int main(void) {
	int a, b, n;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d %d", a, b);
	}
	
	return 0;
}
