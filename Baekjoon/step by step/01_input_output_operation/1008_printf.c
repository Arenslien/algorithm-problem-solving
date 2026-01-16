#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("%d", a/b);
	if(a%b == 0) {
		return 0;
	}
	else {
		printf(".");
		a = a%b * 10;
		
		for(int i=2; i<32; i++) {
			printf("%d",a/b);
			if(a%b == 0) {
				break;
			}
			a = a%b * 10;
		}
	}
	
	return 0;
}
