#include <iostream>

int main(int argc, char *argv[])
{
	using namespace std;
	int a[10];

	long *p;
	int i;
	char *x;

	cout << sizeof(a) << endl;
	cout << sizeof(a[9]) << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(i) << endl;
	cout << sizeof(x) << endl;

	return 0;
}
