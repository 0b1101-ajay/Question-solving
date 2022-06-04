#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b){
	return a>b;
}

int main(int argc, char const *argv[])
{
	int arr[] = {10,9,8,7,6,5,4,3,2,1,14,16,19,33,93};
	int n = sizeof(arr)/sizeof(int);

	// sort(arr, arr + n, compare);
	sort(arr, arr + n, greater<int>());
	// reverse(arr, arr + n);

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}