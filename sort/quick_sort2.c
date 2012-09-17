#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int in[]={2,8,7,1,3,9,4,0,6,4,2,9};
int len;

void print(int* array, int len)
{
	int i=0;
	for(; i< len; i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\n");
}

int partition(int *array, int start,int end)
{
	int old = end;
	int std = array[end];
	end --;

	while(start < end)
	{
		while((start<end) && (array[start]<=std))
		{
			start ++;
		}
		while((start<end) && (array[end]>std))
		{
			end --;
		}

		int tmp = array[start];
		array[start] = array[end];
		array[end] = tmp;
	}

	assert(start==end);

	printf("index:%d %d %d\n",start,end,old);
	printf("value:%d %d %d\n",array[start],array[end],array[old]);

	while(array[start] < std)
		start++;

	array[old] = array[start];
	array[start] =  std;
	return start;
}

void quick_sort(int *array,int start,int end)
{
	if ( end > start )
	{
		int mid = partition(array,start,end);
		quick_sort(array, start, mid-1);
		quick_sort(array, mid+1, end);
	}
}

int main()
{	
	len=sizeof(in)/sizeof(int);
	int *out = malloc(len*8);
	printf("origin: ");
	print(in,len);

	quick_sort(in,0,len-1);

	printf("result: ");
	print(in,len);

	free(out);
	return 0;
}

