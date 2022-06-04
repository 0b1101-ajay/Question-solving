#include <bits/stdc++.h>
using namespace std;


//Brute-force approach

int maxSum_Subarray_B(int arr[], int n){
	int max_sum = arr[0];
	
	for (int i = 0; i < n; ++i)
	{

		for (int j = i; j < n ; ++j)
		{
			int sum = 0;

			for (int k = i; k <= j; ++k)
			{
				sum = sum + arr[k];
			}

			max_sum = max(max_sum, sum);
		}

	}
	return max_sum;
}



// Prefix-sum method

int maxSum_Subarray_Ps(int arr[], int n){

	int prefix_arr[n] = {0};
	prefix_arr[0] = arr[0];

	for (int i = 1; i < n; ++i)
	{
		prefix_arr[i] = arr[i] + prefix_arr[i-1];
	}

	int max_sum = arr[0];

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n ; ++j)
		{
			if (i == 0)
			{
				max_sum = max(max_sum, prefix_arr[j]);
				
			}
			else{
				max_sum = max(max_sum, prefix_arr[j] - prefix_arr[i - 1]);
			}
			
		}
	}

	return max_sum;
}



//Kadane's algorithm - at least one positive element is required for this algorithm to work

int maxSum_Subarray_Kd(int arr[], int n){
	int cur_sum = 0;
	int max_sum = 0;
	for (int i = 0; i < n; ++i)
	{
		cur_sum += arr[i];
		max_sum = max(cur_sum, max_sum);

		if (cur_sum < 0)
		{
			cur_sum = 0;
		}
	}

	return max_sum;
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
	cout<<maxSum_Subarray_B(arr, n)<<endl;
	cout<<maxSum_Subarray_Ps(arr, n)<<endl;
	cout<<maxSum_Subarray_Kd(arr, n);
	return 0;
}
