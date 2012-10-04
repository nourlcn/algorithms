#include <iostream>

const int & get_int(int & a)
{
	int *p;
	std::cout <<"addr of p is " << p << endl;
	*p = a;
	return *p;
}

int main(int argc, char *argv[])
{
	using namespace std;

	int i=0;
	cout << &i << endl;

	int & j = get_int(i);
	//cout << j << endl;

	return 0;
}
