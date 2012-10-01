#include <iostream>

using namespace std;

int f(int a,int b)
{
    cout << "in f, get addr is " << int(&a) << endl;
    return a+b;
}

int main(int argc, char *argv[])
{
    

    int (*pf)(int,int);
    pf=&f;
    pf(1,2);
    cout << "pf addr is " << int(*pf) << endl;
    return 0;
}
