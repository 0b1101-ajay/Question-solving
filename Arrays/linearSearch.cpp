#include <bits/stdc++.h>
using namespace std;


int linear_search(int arr[], int n, int key){
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}

	return -1;
}




int main(int argc, char const *argv[])
{
	int arr[] = {1, 3, 6, 8, 9, 4, 4, 2};
	int n = sizeof(arr)/sizeof(int);

	int key;
	cin>>key;

	int index = linear_search(arr, n, key);

	if (index == -1)
	{
		cout<<key<<" is not present in given array";
	}

	else{
		cout<<key<<" is present at index "<<index;
	}
	return 0;
}