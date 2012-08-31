#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10

int in[N]={1,3,6,9,2,4,4,0,5,8};

void print(int *in,int len)
{
	int i=0;
	for (i=0;i<len;i++)
	{
		printf("%d\t",in[i]);
	}
	printf("\n");
}


int main(int argc,char* argv[])
{	
	//int *p = malloc(ceil(N/sizeof(int)));
	int p=0;
	int i=0;
	for(i=0;i<N;i++)
	{
		int t = 0;
		t = in[i];
		p = (1 << (t-1))|p;
	}

	//printf("\n\n%d\n\n",p);
	
	int count=1;
	for(i=0;i<N;i++)
	{
		if ( 1 & p)
		{
			printf("%d\t",count);
		}
		p = p>>1;
		count ++;
	}
	return 0;
}
