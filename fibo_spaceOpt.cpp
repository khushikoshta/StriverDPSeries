//space optimisation

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n <= 1)
    {
        cout << n << endl;
        return 0;
    }

    int prev1 = 0;
    int prev2 = 1;
    int curr = -1;

    for (int i = 2; i <= n; i++)            //  <=n --> dry runned
    {
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }

    cout << curr << endl;
    return 0;
}

