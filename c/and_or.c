#include <stdio.h>

int main(){
	int x=100;
	int y=300;

	printf("%d", (x&y)+((x^y)>>1));
	return 0;
}
