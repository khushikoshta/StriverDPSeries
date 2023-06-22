#include <iostream>
using namespace std;

bool isPalindrome(string inputString, int n, int i)
{
    //base case
    if( i >= n/2)
        return 1;

    if(inputString[i] == inputString[n-1-i])
    {
        return isPalindrome(inputString,n,i+1);
    }
    
    else{
        return 0;
    }

}
int main()
{
    string inputString;
    getline(cin, inputString);

    int n = inputString.size();

    cout << isPalindrome(inputString,n,0);

    return 0;
}