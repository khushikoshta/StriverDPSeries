#include <iostream>
using namespace std;

void printCounting(int i, int n)
{
    //base case
    if(i>n)
        return;

    cout << i << " ";
    i++;
    return (printCounting(i, n));
}

int main()
{
    int n;
    cin >> n;

    int i = n;

    printCounting(i, n);
    

    return 0;
}


