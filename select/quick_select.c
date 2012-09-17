#include <stdio.h>
#include <stdlib.h>

int in[]={2,8,7,1,3,9,4,0,6,4,2,9};
int len;

void print(int *array, int len)
{
	int i=0;
	for(; i< len; i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\n");
}

int partition(int *array, int s, int e)
{
	int std = array[e];

	int i = s-1;
	int j = s;

	while(j<e)
	{
		if (array[j] < std)
		{
			i++;
			int tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
		j++;
	}

	i++;
	int tmp = array[i];
	array[i] = std;
	array[e] = tmp;
	return i;
}

int qselect(int *array, int s, int e, int k)
{
	int mid = partition(array, s, e);

	if (k == (mid -s + 1))
	{
		return mid;
	}

	if (k < mid - s + 1)
	{
		qselect(array, s, mid-1, k);
	}
	else
	{
		qselect(array, mid + 1, e, k-(mid-s+1));
	}
}

int main()
{	
	len=sizeof(in)/sizeof(int);
	int *out = malloc(len*8);
	printf("origin: ");
	print(in,len);
	
	int k=5;

	printf("top 5 is : %d \n",qselect(in, 0, len-1, k));
	print(in,len);
	free(out);
	return 0;
}

