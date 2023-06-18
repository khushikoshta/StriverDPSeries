//memoization 

#include <iostream>
#include <vector>
using namespace std;

int fibo (int n, vector<int> &dpArray)
{
    //base case
    if(n<=1)
        return n;
    
    //checking if solution exists
    if(dpArray[n] != -1)
        return (dpArray[n]);

    //storing solution + recurrence reln
    dpArray[n] = fibo((n - 1), dpArray) + fibo((n - 2), dpArray);
    return dpArray[n];
}
int main()
{
    int n;
    cin >> n;

    //declaring a DP array to store solutions of overlapping problems
    vector<int> dpArray (n+1,-1);

    cout << fibo(n, dpArray);

    return 0;
}