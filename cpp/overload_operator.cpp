#include <iostream>

class Test
{
    private:
        int a;
        int b;
    public:
        Test(int x=0, int y=0){a=x;b=y;};
        Test operator+(const Test t);
        void show();
};

void Test::show(){
    using std::cout;
    using std::endl;

    cout << a << endl << b << endl;
}
Test Test::operator+(const Test t)
{
    Test tmp;
    tmp.a = a + t.a;
    tmp.b = b + t.b;
    return tmp;
}

int main(int argc, char *argv[])
{
    Test a(5,6);
    Test b(1,2);
    (a+b).show();
    
    return 0;
}
