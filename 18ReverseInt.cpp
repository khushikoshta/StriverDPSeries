class Solution {
public:
    int reverse(int x) {
        
        int n = x;
        int digit = 0;
        int ans = 0;

        while(n != 0)
        {
            //taking out digit
            digit = n % 10;

            //taking out ans
            if(ans < INT_MIN/10 || ans > INT_MAX/10)
            {
               return 0;
            }
            else{
                ans = (ans * 10) + digit;
            }

            //updating n
            n = n / 10;
        }


        return ans;
        


        
        

    }
};