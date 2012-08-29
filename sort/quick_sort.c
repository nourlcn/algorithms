#include <stdio.h>
#include <stdlib.h>

int in[]={2,8,7,1,3,9,4,0,6,4,2,9};

int partition(int *array, int start,int end)
{
	int std = array[end];
	//position for exchange.
	int i = start - 1;

	int j = start;//for loop
	for (j=start; j<end; j++)
	{
		if (array[j] > std)
		{
			i++;
			int tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}

	i++;
	int t = array[i];
	array[i] = std;
	array[end] = t;

	return i;

}

void quick_sort(int *array,int start,int end)
{
	//printf("start-end: %d\t%d\n",start,end);
	if ( end > start )
	{
		int mid = partition(array,start,end);
		quick_sort(array, start, mid-1);
		quick_sort(array, mid+1, end);
	}
}
int main()
{	
	int len=sizeof(in)/sizeof(int);
	int *out = malloc(len*8);
	quick_sort(in,0,len-1);

	int j=0;
	for(j=0; j<len; j++)
	{
		printf("%d\t",in[j]);
	}
	printf("\n");
//	printf("%d\n",len);

	free(out);
	return 0;
}

