#include <stdio.h>
#include <stdlib.h>

int in[]={2,8,7,1,3,9,4,0,6,4,2,9};

int main()
{	
	int len=sizeof(in)/sizeof(int);
	int *out = malloc(len*8);

	printf("%d\n",len);

	free(out);
	return 0;
}
