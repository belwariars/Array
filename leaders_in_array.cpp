// Leaders in an array
// http://www.geeksforgeeks.org/leaders-in-an-array/
#include <bits/stdc++.h>
using namespace std;


void findLeaders(int arr[], int size)
{
	printf("%d ", arr[size-1]);
	int max = arr[size-1];
	int i;
	for(i=size-1; i>=0; i--)
	{
		if(arr[i] > max)
		{
			printf("%d ", arr[i]);
			max = arr[i];
		}
	}
}


int main()
{
	int arr[] = {16, 17, 4, 3, 5, 2};
	int size = sizeof(arr)/sizeof(arr[0]);
	findLeaders(arr, size);
	return 0;
}

