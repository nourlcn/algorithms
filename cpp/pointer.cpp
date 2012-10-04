#include <iostream>

int main(int argc, char *argv[])
{
	using namespace std;
	int *a = new int[2];
	a[0] = 1;
	a[1] = 2;

	a = a+1;

	cout << *a << endl;

	return 0;
}
