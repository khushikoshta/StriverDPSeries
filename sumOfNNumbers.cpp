#include <iostream>
using namespace std;

int sumOfNumbers(int n)
{
    //base case
    if(n == 0)
        return 0;

    return (n + sumOfNumbers(n-1));
}

int main()
{
    int n;
    cin >> n;
    
    cout << sumOfNumbers(n);
    
    return 0;
}