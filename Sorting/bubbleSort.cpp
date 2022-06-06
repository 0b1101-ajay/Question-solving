#include <bits/stdc++.h>
using namespace std;


void bubble_sort_recursive(int arr[], int i, int n) {
    if(n == 1) return;
    if(i == n-1) {

        	bubble_sort_recursive(arr, 0, n-1);

      	return;
    }
    if(arr[i] > arr[i+1]) {
        swap(arr[i], arr[i+1]);
    }
    bubble_sort_recursive(arr, i+1, n);
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i]; 
	}
	// for (int i = 0; i < n - 1; ++i)
	// {
	// 	bool is_swapped = false;
	// 	for (int j = 0; j < n - i -1; ++j)
	// 	{
	// 		if (arr[j + 1] < arr[j])
	// 		{
	// 			swap(arr[j],arr[j + 1]);
	// 			is_swapped = true;
	// 		}
	// 	}
	// 	if (!is_swapped)
	// 	{
	// 		break;
	// 	}
		
	// }

	bubble_sort_recursive(arr, 0, n); 

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" "; 
	}

}