#include <iostream>
using namespace std;

void reverseArray(int start, int end, int arr[])
{
    //base case
    if(start >= end)
        return;

    swap(arr[start], arr[end]);
    return (reverseArray(start + 1, end - 1, arr));
}

void reverseArray2 (int i, int n, int arr[])
{
    //base case
    if(i >= n/2)
        return;

    swap(arr[i], arr[n - 1 - i]);
    return reverseArray2(i + 1, n, arr);
}

int main()
{
    int arr[12] = {7, 5, 3, 8, 0, 6, 4, 9, 7, 2, 3, 5};
    int n = 12;

    int start = 0;
    int end = n - 1;

    //reverseArray(start, end, arr);

    int i = 0;
    reverseArray2(i, n, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}