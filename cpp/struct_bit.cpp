#include <iostream>

int main(int argc, char *argv[])
{
	using namespace std;
	struct test
	{
		unsigned int a : 4;

		unsigned int : 8;
		unsigned int : 8;
		unsigned int : 8;
		unsigned int : 8;
		unsigned int : 8;
		char c :1;

	};

	struct   s1
	{
		int   i : 8;
		int   j : 4;
		int   a : 3;
		double   b;
		int ii;
		bool bb;
	};

	cout << sizeof(s1) <<endl;

	struct test t = { };

	cout << sizeof(int) << endl;
	cout << sizeof(t) << endl;

	return 0;
}
