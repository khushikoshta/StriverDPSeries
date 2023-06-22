#include <iostream>
#include <vector>
using namespace std;

void printSubsequence(int arr[], vector<int> &store, int n, int index)
{
    //base case
    if(index == n)
    {
        if(store.size() == 0)
        {
            cout << "{}" << endl;
        }
        
        for(auto i : store)
        {
            cout << i << " ";
        }
        cout << endl;

        
        return;
    }

    //taking an element
    store.push_back(arr[index]);
    printSubsequence(arr, store, n, index + 1);

    //not taking an element
    store.pop_back();
    printSubsequence(arr, store, n, index + 1);
}

int main()
{
    int arr[3] = {3, 1, 2};
    int n = 3;
    
    int index = 0;
    vector<int> store;
    
    printSubsequence(arr, store, n, index);

    return 0;
}