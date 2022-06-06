#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid_point, int end)
{
	int temp[end - start + 1];
	int i = start;
	int j = mid_point + 1;
	int k = 0;
	while (i <= mid_point && j <= end)
	{
		if (arr[i] < arr[j])
		{
			temp[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = arr[j];
			k++;
			j++;
		}
	}

	while (i <= mid_point)
	{
		temp[k] = arr[i];
		i++;
		k++;
	}
	while (j <= end)
	{
		temp[k] = arr[j];
		j++;
		k++;
	}
	for (int i = start; i <= end; ++i)
	{
		arr[i] = temp[i - start];
	}
}

void merge_sort(int arr[], int start, int end)
{
	if (start == end)
	{
		return;
	}
	int mid_point = (start + end) / 2;
	merge_sort(arr, start, mid_point);
	merge_sort(arr, mid_point + 1, end);
	merge(arr, start, mid_point, end);
}

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	merge_sort(arr, 0, n - 1);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}