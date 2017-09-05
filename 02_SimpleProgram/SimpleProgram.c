#include <stdio.h>

//int addArray(int array[], int n);
int addArray(int *array, int n);

void main()
{
	int data[] = {0,1,2,3,4,5,6,7,8,9};
	int size = sizeof(data)/sizeof(data[0]);
	printf("The size of data is %d\n", sizeof(data));
	//printf("The size of array is %d\n", size);
	int sum_array;
	sum_array = addArray(data, size);
	printf("The sum of array is %d\n", sum_array);
}

//int addArray(int array[], int n)
int addArray(int *array, int n)
{
	int sum = 0;
	int i = 0;
	printf("The size of array is %d\n", sizeof(array));
	for( ; i<n; i++)
	{
		sum += *array++;
	}
	return sum;
}
