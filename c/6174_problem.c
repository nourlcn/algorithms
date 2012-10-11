//6174问题

#include <stdio.h>

struct sa{
	int a[4];
};

int top=-1;
struct sa stack[1000];


void swap(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

void sort(int x[], int num)
{
	int i=0;
	while(i<num)
	{
		int j;
		for(j=0;j<3;j++) if(x[j]<x[j+1]) swap(x+j,x+j+1);

		i++;
	}
}

void push(int x[], int num)
{
	top ++;
	int i;
	for(i=0;i<num;stack[top].a[i] = x[i], i++);
}

_Bool find(int x[], int num)
{
	int j=0;
	for(;j<num;printf("%d",x[j]), j++);
	printf("\n");

	j=0;
	int find_it = 0;
	while(j<=top && !find_it)
	{	
		int m=0;
		int flag=1;

		for(; (m<num)&&flag; m++)
		{
			if (stack[j].a[m]!=x[m])
			{	
				flag = 0;
			}
		}
		if (m==num)
			find_it = 1;

		j++;
	}

	if(j==top+1)
		return 0;
	
	return 1;
}

int main()
{
	int n;
	int a[4];

	int count=1;	

	scanf("%d",&n);
	int i=0;
	for(i;i<4;a[i]=n%10,n/=10,i++);
	
	memset(stack,0,sizeof(stack));			
	sort(a, 4);

	do{
		push(a, 4);
		count ++;

		int big=0, small=0;
		for (i=0; i<4; big=big*10+a[i], small=small*10+a[3-i], i++);

		int tmp = big-small;
		printf("big-small=%d-%d=%d\n", big, small, tmp);
		for(i=0;i<4;a[i]=tmp%10, tmp/=10, i++);

		sort(a, 4);
	}while(count<1000 && !find(a,4));

	if(count == 1000)
		printf("could not solve this problem using less than 1000 loops.\n");

//	printf("big is %d and small is %d", big, small);
//	for(i=0;i<4;i++)  printf("%d", a[i]);

}
