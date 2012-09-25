#include "iostream"
#include "string"

using namespace std;

class A {
public:
	virtual void f() { cout << "A::f" << endl; }
};
class B :public A{
public:
	void f() { cout << "B::f" << endl;}
};
class C :public A {
public:
	void f() { cout << "C::f" << endl;}
};
class Drive : public C {
public:
	void f() { cout << "D::f" << endl;}
};

int main(int argc, char* argv[])
{
    A *pa;
    B *pb;
    C *pc;
	A a;
	B b;
	C c;
	Drive d;

    pa = &b;
    pb = &a;
    pc = &c;
	a.f();
	b.f();
	c.f();
	d.f();

    pa->f();
    pb->f();
    pc->f();
	return 0;
}