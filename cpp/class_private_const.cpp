#include <iostream>

class Test2
{
    private:
        enum en {a=1,b=2};
    public:
        void view_en();

};
void Test2::view_en()
{
    using std::cout;
    using std::endl;
    cout << a << endl;

}
class Test
{
    private:
        //static int st = 10;
        //const int a = 5;
        int a;
        int st;
        const static int sta = 12;
        int b;
    public:
        Test(){ b = 10;};
        void view_a();
};

void Test::view_a()
{
    using std::cout;
    using std::endl;
    cout << a << endl;
}

int main(int argc, char *argv[])
{
    //Test t;
    //t.view_a();

    Test2 t2;
    t2.view_en();

    using std::cout;
    using std::endl;
    cout << "is " <<  -3%3 << endl;
        
    return 0;
}
