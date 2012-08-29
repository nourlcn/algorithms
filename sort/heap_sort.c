#include <stdio.h>
#include <stdlib.h>

#define parent(i)	((int)((i)/2))
#define left(i)		((i)*2)
#define right(i) 	((i)*2+1)

int in[]= {2,8,7,1,3,9,4,0,6,4,2,9};

void max_heapify(int *array,int len,int i)
{
    int largest=0;

    if ( (left(i) <= len) && (array[left(i)-1] > array[i-1]))
    {
        largest = left(i);
    }
    else
    {
        largest = i;
    }

    if ((right(i) <= len) && array[right(i)-1] > array[largest-1] )
    {
        largest = right(i);
    }

    //printf("largest is %d\n", largest);
    if (largest != i)
    {
        int tmp = array[i-1];
        array[i-1] = array[largest-1];
        array[largest-1] = tmp;

        max_heapify(array, len, largest);
    }

}

int main()
{
    int len=sizeof(in)/sizeof(int);
    int *out = malloc(len*8);

    //	printf("%d\n",len);
    //build heap
    int j;
    for (j=parent(len);  j>0; j--)
    {
        max_heapify(in, len, j);
    }

    for(j=0; j<len; j++)
    {
        printf("%d\t",in[j]);
    }

    printf("\n\n\n");

    for(j=len; j>1;)
    {
        printf("%d\t",in[0]);

        int tmp=in[0];
        in[0] = in[j-1];
        in[j-1] = tmp;
        j --;

        max_heapify(in,j,1);
    }

    free(out);
    return 0;
}
