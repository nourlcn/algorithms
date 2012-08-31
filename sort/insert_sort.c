#include <stdio.h>
#include <stdlib.h>

int in[]={2,8,7,1,3,9,4,0,6,4,2,9};

void print(int *in,int len)
{
	int i=0;
	for (i=0;i<len;i++)
	{
		printf("%d\t",in[i]);
	}
	printf("\n");
}

int main()
{	
	int len=sizeof(in)/sizeof(int);
	int *out = malloc(len*8);
	
	int j=0;
	int i=1;
	print(in,len);

	for (;i<len;i++)
	{
		int tmp = in[i];
		j = i-1;

		while ((j>=0) && (tmp < in[j]))
		{
			in[j+1] = in[j];
			j--;
		}

		in[j+1] = tmp;

		print(in,len);
	}

//	printf("%d\n",len);

	free(out);
	return 0;
}
