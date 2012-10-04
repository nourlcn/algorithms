#include <iostream>

int main(int argc, char *argv[])
{
	using namespace std;
	int a[10];

	long *p ;
	char *pp = "abcd";
	int i;
	char *x;

	cout << sizeof(pp) << endl;
	cout << sizeof(a) << endl;
	cout << sizeof(a[9]) << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(i) << endl;
	cout << sizeof(x) << endl;

	return 0;
}
