#include <vector>

bool palindrome(int n)
{
    //check case for 0 strings
    if(n == 0)
        return true;

    // Creating a vector to store digits
    vector <int> digits;
    int x = n;

    //calculating and storing digits
    while(x>0)
    {
        int digit = x%10;

        digits.push_back(digit);
        
        x = x/10;
    }

    //Checking palindrome using 2 ptr approach
    int i = 0;
    int j = digits.size()-1;

    while(i<j)
    {
        if(digits[i] != digits[j])
            return false;

        
        i++;
        j--;
    }

    return true;
}