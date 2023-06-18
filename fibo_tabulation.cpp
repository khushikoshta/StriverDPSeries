//tabulation

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    //declaring vector to store values
    vector<int> dpArr(n+1);

    //initialising base case values
    dpArr[0] = 0;
    dpArr[1] = 1;

    //calculating remaining values
    for (int i = 2; i <= n; i++)
    {
        dpArr[i] = dpArr[i - 1] + dpArr[i - 2];
    }

    //ans
    cout << dpArr[n] << endl;

    return 0;
}