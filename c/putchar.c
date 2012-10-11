#include <stdio.h>

int main(int argc, char * argv){
	char *s = "abcdefghijklmnopqrstuvwxyz";
	int i;
	char c;
	while(c=getchar()){
		for(i=0; s[i]&&s[i]!=c;i++);
		
		if(i==0)
			putchar('z');
		else{
			if(!s[i])
				putchar(' ');
			else
				putchar(s[i-1]);
		}
	}
}
