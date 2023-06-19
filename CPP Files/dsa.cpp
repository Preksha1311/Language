#include<bits/stdc++.h>
using namespace std;

int lastsea(int arr[], int size, int key)
{
	int start = 0;
	int end = size - 1;//index
	int mid = start + end / 2;//index
	int ans = -1;
	while (start <= end) {
		if (key == arr[mid]) {
			ans  = mid;
			start = mid + 1;
		}
		if (key > arr[mid])
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
		mid = (start + end) / 2;
	}//loop

	return ans;
}

int firstsea(int arr[], int size, int key)
{
	int start = 0;
	int end = size - 1;//index
	int mid = start + end / 2;//index
	int ans = -1;
	while (start <= end) {
		if (key == arr[mid]) {
			ans  = mid;
			end = mid - 1;
		}
		if (key > arr[mid])
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
		mid = (start + end) / 2;
	}//loop

	return ans;
}
//we return the index
//return 1 index

int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	int even[10] = {1, 5, 5, 5, 5, 5, 5, 5, 5, 15};
	int odd[9] = {4, 5, 6, 70, 90, 230, 899, 45000, 878768768};
	int key = 0;
	cout << "key?" << endl;
	cin >> key;
	cout << firstsea(even, 10, key) << endl;
	cout << lastsea(even, 10, key) << endl;

	// if (iio != -1)
	// 	cout << "found at index " << iio << "." << endl;
	// else
	// 	cout << "Not found!" << endl;
	return 0;
}
