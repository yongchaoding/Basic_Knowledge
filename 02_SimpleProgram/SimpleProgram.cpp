#include <iostream>	// c99
using namespace std;

int addArray(int *array, int n);

int main()
{
	int data[] = {0,1,2,3,4,5,6,7,8,9};
	int size = sizeof(data)/sizeof(data[0]);
	int sum_array;
	sum_array = addArray(data, size);
	cout << "The sum of array is " << sum_array << endl;		
	return 0;
}


int addArray(int *array, int n)
{
	int sum = 0;
	int i = 0;
	for( ; i<n; i++)
	{
		sum += *array++;
	}
	return sum;
}
