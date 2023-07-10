#include<bits/stdc++.h>
using namespace std;

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin >> n;

        int a = 0;
        int b = 1;

        int fib = a+b;
        for(int i=2; i<=n; i++)
        {
                fib = a + b;
                a = b;
                b = fib;
        }

        cout << fib << endl;

}