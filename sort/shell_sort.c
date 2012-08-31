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

void insert_sort(int *p,int len,int N)
{
	int i=0;

	for (;i<len;i+=N)
	{
		int tmp = p[i];
		int j = i-N;

		while ((j>=0) && (tmp < p[j]))
		{
			p[j+N] = p[j];
			j-=N;
		}

		p[j+N] = tmp;
	}
}

int main()
{	
	int len=sizeof(in)/sizeof(int);
	int *out = malloc(len*8);

	print(in,len);
	int k=5;
	for (;k>0;k--)
	{
		int tmp=0;
		while(tmp<k){
			insert_sort(in+tmp,len-tmp,k);
			tmp++;
		}

	}	


//	insert_sort(in,len,1);
//	insert_sort(in+1,len-1,1);

	print(in,len);

//	printf("%d\n",len);

	free(out);
	return 0;
}
