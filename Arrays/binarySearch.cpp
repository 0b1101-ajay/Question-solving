#include <bits/stdc++.h>
using namespace std;


int recursive_binary_search(int arr[], int low, int high, int key)
{
	if (low>high)
	{
		return -1;
	}
	int mid_point = low + (high - low)/2;
	if (arr[mid_point] == key)
		{
			return mid_point;
		}
	else if (arr[mid_point] > key)
	{
		return recursive_binary_search(arr,low,mid_point-1, key);
	}
	else
	{
		return recursive_binary_search(arr,mid_point + 1, high, key);
	}
}


int binary_Search(int arr[],int n, int key)
{
	int low = 0;
	int high = n - 1;
	while(low <= high)  // high - low >= 0
	{
		int mid_point = low + (high - low)/2;
		if (arr[mid_point] == key)
		{
			return mid_point;
		}

		else if (arr[mid_point] > key)
		{
			high = mid_point - 1;
		}
		else
		{
			low = mid_point + 1;
		}
	}
	return -1;

}


int main()
{
	int n;
	int key;
	cin>>n>>key;

	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	
	int index = binary_Search(arr, n, key);

	if (index == -1)
	{
		cout<<key<<" is not present in given array";
	}

	else{
		cout<<key<<" is present at index "<<index;
	}

	return 0;
}