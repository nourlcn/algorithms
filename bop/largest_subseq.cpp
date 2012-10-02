#include <iostream>
//#include <string>

//如果子序列在数组中是连续的，可以O(N)求解，解法如下：
//
using namespace std;

int main(int argc, char * argv[])
{
//	string s;
//	cin >> s;

	const int N = 8;
	int a[N]={1,-1,2,3,4,-5,6,-7};
	int i=1;
	int len = 1;
	int max = len;
	for (i=1; i< N; i++)
	{
		if (a[i] > a[i-1])
		{
			len ++;
		}
		else
		{
			len = 1;
		}

		if (len > max)
		{
			max = len;
		}
	}

	cout << max << endl;
}
