#include <iostream>
// 0 1 1 2 3 5 8 13
using namespace std;

int fibonacci_2(int n)
{
    int i = 0;
    int j = 1;

    if (n==0)
    {
        return i;
    }

    if (n==1)
    {
        return j;
    }

    int t = i+j;
    int index = j;
    while(index < n)
    {
        t = i+j;
        i = j;
        j = t;
        index ++ ;
    }
    return t;
}

int fibonacci_1(int n)
{
    if (n==0)
    {
        return 0;
    }

    if (n==1)
    {
        return 1;
    }

    return fibonacci_1(n-1) + fibonacci_1(n-2);
}
int main(int argc, char *argv[])
{
    int t = 7;

    //cout << fibonacci_1(t) << endl;
    cout << fibonacci_2(t) << endl;
    return 0;
}
