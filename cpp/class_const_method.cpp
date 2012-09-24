#include <iostream>

using namespace std;

class test{
private:
    int a;
    int b;
public:
    test()
    {
        a = 2;
        b = 4;
    };

    void set_a(int x=9);
    int get_a();
    void set_a(int x,int y) const;
};

void test::set_a(int x,int y) const{
   cout << a << endl;
}

void test::set_a(int x=9){
    a = x;
}

int test::get_a(){
    return a;
}

int main(int argc, char *argv[]){
    test t;
    t.set_a();
    cout << t.get_a() << endl;

    return 0;
}
