#include <iostream>
using namespace std;

void printCounting(int n)
{
    //base case
    if(n == 0)
        return;

    cout << n << " ";
    n--;
    return (printCounting(n));
}

int main()
{
    int n;
    cin >> n;

    printCounting(n);

    return 0;
}