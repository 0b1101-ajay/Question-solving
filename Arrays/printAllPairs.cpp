#include <bits/stdc++.h>
using namespace std;


void printAllPairs(int arr[], int n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (i == n - 2 && j == n-1)
			{
				cout<<"("<<arr[i]<<","<<arr[j]<<")";
			}

			else{
				cout<<"("<<arr[i]<<","<<arr[j]<<"),  ";
			}
			
		}
	}
	return;
	
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	

	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	printAllPairs(arr, n);
	
	return 0;
}