long long factorial (long long x)
{
    //base case
    if(x==1 || x==0)
        return 1;

    return x * factorial(x-1);
}

vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here


    vector<long long> ans;

    for(long long i=1; i<=n; i++)
    {
        long long  fact = factorial(i);
        if(fact <= n)
            ans.push_back(fact);
        else
            break;
    }

    sort(ans.begin(),ans.end());
    return ans;
    
}