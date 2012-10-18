#include <stdio.h>

#define compare(a,b) (((a)-(b)-abs((a)-(b)))?-1:(((a)==(b))?0:1))

int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d",compare(a,b));
}
