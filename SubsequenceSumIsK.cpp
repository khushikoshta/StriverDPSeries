#include<iostream>
#include<vector>
using namespace std;

void printSubsequence(int n, int index, int arr[], vector<int> &ans, int sum, int k)
{
    //base case
    if(index >= n )
    {
        if(sum == k)
        {
            for(auto it : ans)
            {
                cout << it << " ";
            }
            cout << endl;
        }

        return;
    }

    //including an element
    ans.push_back(arr[index]);
    sum += arr[index];
    printSubsequence(n, index + 1, arr, ans, sum, k);

    //excluding an element
    ans.pop_back();
    sum -= arr[index];
    printSubsequence(n, index + 1, arr, ans, sum, k);
}
int main()
{
    int arr[3] = {1,2,1};
    int n = 3;
    int k = 2;

    vector<int> ans;
    int index = 0;
    int sum = 0;

    printSubsequence(n, index, arr, ans, sum, k);
    return 0;
}