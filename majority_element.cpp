//Majority Element
//http://www.geeksforgeeks.org/majority-element/

#include <bits/stdc++.h>
using namespace std;




void findMajority(int arr[], int size)
{
	unordered_map<int, int> container;
	int i;
	for(i=0;i<size;i++)
	{
		if(container.find(arr[i]) != container.end())
		{
			container.find(arr[i])->second++;
			if(container.find(arr[i])->second > (size/2))
			{
				printf("%d", arr[i]);
				return;
			}
		}




		else
		{
			container.insert(make_pair(arr[i], 1));
		}
	}
}




int main()
{
	int arr[] = {1,3,6,3,6,6,1,6,3,6,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	findMajority(arr, size);
	return 0;
}


//TC: O(size^3) - in worst case
//SC: O(size)

