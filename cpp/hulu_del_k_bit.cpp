#include <iostream>

using namespace std;

int a[]={2,4,1,7,8,9,0,2,5};
int del=2;

int find_min(int *a, int i, int j)
{
    int min = i;
    while(i<j)
    {
        if (a[i] < a[min])
        {
            min = i;
            i ++ ;
        }
    }

    return min;
}

void delete_num(int *a, int i, int j, int del)
{
    int d = find_min(a,i,i+del);
    if (d>i)
    {
        int tmp = i;
        for (;tmp<d;tmp++ )
        {
            cout << "now del i=" << tmp;
            a[tmp] = -1;
        }
    }
    
    int new_del = del-(d-i);

    if (new_del > 0)
    {
        delete_num(a, d+1, j, new_del);
    }
}

int main(int argc, char *argv[])
{
    /*
    int len =0 ;
    int b=a;
    while(b>0)
    {
        len++;
        b = b / 10;
    }
    */

    int N = 9;

    for (int i=0;i<N ;i++ )
    {
        cout << a[i];
    }
    cout << endl;

    delete_num(a, 0, N-1, del);

    for (int i=0;i<N ;i++ )
    {
        cout << a[i];
    }
    cout << endl;

    return 0;
}
