//题目：计算1000的阶乘
//这个解法是计算30的阶乘

#include <stdio.h>
#include <stdlib.h>
int r[3000];

int main(int argc, char* argv[]){
	int n;
	scanf("%d",&n);
	memset(&r, 0, sizeof(r));
	r[0] = 1;
	int i=2;

	while(i<=n){
		int j;
		int c = 0;

		for(j=0; j<3000; j++)
		{
			int t = r[j]*i + c;
			r[j] = t%10;
			c = t/10;			
		}
		i++;
	}

	for (i=2999;r[i]==0;i--);

	for (;i>=0;i--){ 
		printf("%d",r[i]);
	}
	
}
