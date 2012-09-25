#include <iostream>

//verify: Error algo.

int partition(int *array, int start,int end)
{
	int std = array[end];
	//position for exchange.
	int i = start - 1;

	int j = start;//for loop
	for (j=start; j<end; j++)
	{
		if (array[j] > std)
		{
			i++;
			int tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}

	i++;
	int t = array[i];
	array[i] = std;
	array[end] = t;

	return i;

}

void quick_sort(int *array,int start,int end)
{
	//printf("start-end: %d\t%d\n",start,end);
	if ( end > start )
	{
		int mid = partition(array,start,end);
		quick_sort(array, start, mid-1);
		quick_sort(array, mid+1, end);
	}
}

int find(int x, int* s, int start, int end)
{
	using namespace std;
	//cout << "x is " << x << " start end are " << "(" << start << "," << end << ")" << endl;
	if (start == end)
	{
		return start;
	}

	int i = start+(end-start)/2;

	if (s[i] > x)
	{
		return find(x, s, i+1, end);
	}
	else
	{
		return find(x, s, start, i);
	}
}

int main(int argc, char *argv[])
{
	using namespace std;
	int N=14;
	int a[14] = {1,10,6,11,2,12,7,13,3,14,8,4,9,5};

	int total=0;
	int i = 0;
	for (;i<N ;++i )
	{
		int j = i+1;
		for (;j<N ;++j )
		{
			if (a[j] < a[i])
			{
				total ++;
			}
		}
	}

	cout << "method1 total is: " << total << endl;

	int b[N];
	for (i=0; i<N ;i++)
	{
		b[i] = a[i];
	}

	quick_sort(b,0,N-1);

	for (i=0;i<N;i++ )
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (i=0;i<N;i++ )
	{
		cout << b[i] << " ";
	}
	cout << endl;

	int total2 = N*(N-1)/2;
	int sum = 0;

	for (i=0 ;i<N ;i++ )
	{
		int t = find(a[i],b,0,N-1);//O(log(n))
		cout << "t is :" << abs(t-i) << endl;
		sum += abs(t-i);
	}

	cout << total2 << endl;
	cout << sum << endl;

	total2 -= sum/2;

	cout << "method2 total is: "<< total2 << endl;
	return 0;
}
