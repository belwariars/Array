//Given an array A[] and a number x, check for pair in A[] with sum as x
// http://www.geeksforgeeks.org/write-a-c-program-that-given-a-set-a-of-n-numbers-and-another-number-x-determines-whether-or-not-there-exist-two-elements-in-s-whose-sum-is-exactly-x/


#include <bits/stdc++.h>
using namespace std;




void checkPair(int arr[], int size, int sum)
{
	sort(arr,arr+size);
	int i;
	int l=0;
	int r=size-1;
	while(l<r)
	{
		int currSum = arr[l] + arr[r];
		if(currSum == sum)
		{
			printf("%d %d", arr[l], arr[r]);
			return;
		}




		else if(currSum < sum)
		{	
			l++;
		}




		else
		{
			r--;
		}
	}




	printf("No number as such");
	return;
}




int main()
{
	int arr[] = {2,7,4,9,1,6,3,8};
	int sum = 27;
	int size = sizeof(arr)/sizeof(arr[0]);
	checkPair(arr, size ,sum);
return 0;
}










//  2. Hashing:-


#include <bits/stdc++.h>
using namespace std;




void checkPair(int arr[], int size ,int sum)
{
	unordered_set<int> container;
	int i;
	for(i=0; i<size; i++)
	{
			container.insert(sum-arr[i]);


	}




	for(i=0; i<size; i++)
	{
		if((container.find(arr[i])) != container.end())
		{
			printf("yes");
			return;
		}
	} 
	


	printf("no");
	return;
}


// 15 10 13 8 16 11 14 9




int main()
{
	int arr[] = {2,7,4,9,1,6,3,8};
	int sum = 17;
	int size = sizeof(arr)/sizeof(arr[0]);
	checkPair(arr, size ,sum);
return 0;
}



