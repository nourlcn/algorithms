#include <iostream>

int main(int argc, char *argv[])
{
	using namespace std;
	char ch = 'M';
	int  i = ch;

	const char aa = 'a';
	cout << aa << endl;

	cout << i << endl;

	cout << ch << endl;
	++i;

	--ch;
	cout <<endl << "ch is " << ch << endl;

	cout.put(i);

	cout << endl;

	cout.put(97);

	return 0;
}
