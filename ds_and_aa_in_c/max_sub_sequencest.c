//the index[i,j] of the max value of sub sequence
#include <stdio.h>

int a[10]={1,2,-3,4,3,2,-5,3,4,9};

int main(int argc, char *argv[])
{
	int i=0;
	int lasti = i;
	int lastj = lasti;
	int sum = 0;
	for (i=0;i<10 ;i++ )
	{
		sum += a[i];

		if (sum <= 0)
		{
			sum = 0;
			lasti = i+1;
			lastj = lasti;
		}
		else
		{
			lastj = i;
		}
	}

	printf("%d\t%d",lasti,lastj);
	return 0;
}
