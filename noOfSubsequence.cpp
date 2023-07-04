#include<iostream>
#include<vector>
using namespace std;

int printSubsequence(int n, int index, int arr[], int sum, int k)
{
    //base case
    if(index >= n )
    {
        if(sum == k)
            return 1;

        return 0;
    }

    //including an element
    sum += arr[index];
    int include = printSubsequence(n, index + 1, arr, sum, k);

    //excluding an element
    sum -= arr[index];
    int exclude = printSubsequence(n, index + 1, arr, sum, k);

    return include + exclude;
}
int main()
{
    int arr[3] = {1,2,1};
    int n = 3;
    int k = 2;

    int index = 0;
    int sum = 0;

    cout << printSubsequence(n, index, arr, sum, k) << endl;
    return 0;
}