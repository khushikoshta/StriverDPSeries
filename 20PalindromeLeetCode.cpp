class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)
            return false;
        if(x == 0)
            return true;

        int n = x;
        vector<int> arr;

        while(n>0)
        {
            int digit = n%10;
            
            arr.push_back(digit);

            n = n/10;
        }

        int i = 0;
        int j = arr.size()-1;

        while(i<j)
        {
            if(arr[i] != arr[j])
                return false;

            i++;
            j--;
        }

        return true;
    }
};