// first and last occurence using binary search
#include <iostream>
using namespace std;

int firstOcc(vector<int> &arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}
int lastOcc(vector<int> &arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

pair<int, int> fistandlast(vector<int> &arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}
int main()
{
    vector<int> arr = {2, 5, 6, 78, 78, 78, 78, 79, 80, 90};
    // already sorted array
    cout<< fistandlast(arr, arr.size(), 78);

    return 0;
}