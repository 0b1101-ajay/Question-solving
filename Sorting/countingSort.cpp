#include <bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int n){

	int max = *max_element(arr, arr + n);
	int min = *min_element(arr, arr + n);
	int range = max - min + 1;

	int count_arr[range] = {0};


	for (int i = 0; i < n; ++i)
	{
		count_arr[arr[i] - min]++;
	}


	for (int i = 0; i < range; ++i)
	{
		while(count_arr[i]){
			cout<<i + min<<" ";
			count_arr[i]--;
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


	countingSort(arr, n);
	return 0;
}