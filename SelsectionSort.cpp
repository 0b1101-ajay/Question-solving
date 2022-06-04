#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i]; 
	}
	for (int i = 0; i < n; ++i)
	{
		int minindex = i;
		for (int j = i + 1; j < n; ++j)
		{
			
			if (arr[minindex] > arr[j])
			{
				minindex = j;
			}
		}
		swap(arr[i],arr[minindex]);
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" "; 
	}
}