#include <iostream>
using namespace std;
void printName(int n, string name)
{
    //base case
    if (n == 0)
        return;

    cout << name << endl;
    n--;
    return (printName(n, name));
}

int main()
{
    int n;
    cin >> n;

    string name;
    cin >> name;

    printName(n, name);

    return 0;
}