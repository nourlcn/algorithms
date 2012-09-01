#include <stdio.h>
#include <stdlib.h>

void exchage_ni(int *s,int len,int i)//move s to left i position.
{
	int *p;
	int t = 0;
	i = i % len;

	for (t=0;t<i;t++)
	{
		p = s+t;
		int tmp = *p;
		int index=0;
		while(index+i<len)
		{
			p[index] = p[index+i];
			index += i;
		}
		p[len-i] = tmp;
		
	}

}

void print(int *s, int len)
{
	int i=0;
	while(i < len)
	{
		printf("%d\t",s[i]);
		i++;
	}
	printf("\n");
}
int main(void)
{
	int array[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int len = sizeof(array)/sizeof(int);
	exchage_ni(array,len,5);
	
	print(array,len);

	return 0;
}
