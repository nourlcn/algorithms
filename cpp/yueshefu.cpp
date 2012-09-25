#include <iostream>
using namespace std;

int k = 3;
int limit = 7;
const int N = 20;

void print(int *in, int len)
{
    int i = 0;
    while(i < len)
    {
        cout << in[i] << " ";
        i++;
    }
    cout << endl;
}
int main(int argc, char *argv[])
{
    int a[N];
    int i;
    for (i=0;i<N ;i++ )
    {
        a[i] = 1;
    }

    int total=N;
    i = k;
    int expect=1;
    while(total>=1)
    {
        while(expect < limit)
        {
            i = (i+1)%N;
            if (a[i] == 1)
            {                
                expect ++ ;
            }
        }

        while(a[i] == 0)
        {
            i = (i+1)%N;
        }

        a[i] = 0;        
        cout << i << endl;
        total--;
        while((a[i]==0)&&(total < 0))
        {
            i = (i+1)%N;
        }
        expect = 2;  
        //print(a,N);
    }

    return 0;
}
