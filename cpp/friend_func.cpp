#include <iostream>

using std::ostream;

class Test
{
    private:
        int a;
        int b;
    public:
        Test(int x=0,int y=5){a=x;b=y;}
        friend void operator<<(ostream & os, const Test t);
};

void operator<<(ostream & os, const Test t)
{
    using std::endl;
    os << t.a << endl << t.b << endl;
}

int main(int argc, char *argv[])
{
    using std::cout;

    Test t1;
    Test t2(3,4);
    cout << t1;
    cout << t2;
    return 0;
}
