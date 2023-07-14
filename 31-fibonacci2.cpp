class Solution {
public:
    int fib(int n) {
        
        //base case
        if(n==0)
            return 0;
        if(n==1)
            return 1;

        int ans = fib(n-1) + fib(n-2);

        //iterative approach
        /*
        for(int i=1; i<=n-2; i++)
        {
            fibo = a + b;
            a = b;
            b = fibo;
        }*/

        return ans;
    }
};